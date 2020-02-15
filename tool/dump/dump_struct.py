#!/usr/bin/env python3

# WARN: this is a buggy tool. Its output needs checking by human.

import bitstruct
import sys

if len(sys.argv) == 1:
    print(sys.argv[0], " Character/Job/Item")

# "format" & "bitfield" is generated by make_format.py
infos = {
    "Character": {
        "format": "u16u16u8u8u16u8u8u8s8s8s8s8s8s8s8s8s8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u8u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u32u8p24<",
        "start": 0xc4c158,
        "list": "Characters.txt",
        "bitfield": (38, 70),
        "startIndex": 1
    },
    "Job": {
        "format": "u16u16u8u8u8u8u16u8s8s8s8s8s8s8s8s8s8s8s8s8s8s8s8u8s8s8s8s8s8s8s8s8s8s8s8s8s8u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u8u8u8u8u8u8u8u8u32u32u32u32u32u32u32u32<",
        "start": 0xc4f468,
        "list": "Class List.txt",
        "bitfield": (38, 70),
        "startIndex": 0
    },
    "Item": {
        "format": "u16u16u16u8u8u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u32u32u8u8u8u8u8u4u4u16u8u8u8u8u8p24<",
        "start": 0xc51538,
        "list": "Item List.txt",
        "bitfield": (6, 38),
        "startIndex": 0
    },
    "StandingSprite": {
        "format": "u16u16u32<",
        "start": 0xd613b8,
        "list": "Class List.txt",
        "startIndex": 1
    },
}

structName = sys.argv[1]

if structName in ("character", "chara", "Chara", "unit", "Unit"):
    structName = "Character"
elif structName in ("class", "Class", "job"):
    structName = "Job"
elif structName in ("item", "Weapon", "weapon", "Equipment", "equipment", "Equip", "equip"):
    structName = "Item"

if structName in infos:
    info = infos[structName]
else:
    print("Unsupported struct: ", structName)
    sys.exit(1)

with open(info["list"], 'r') as l:
    lines = l.readlines()
    info["amount"] = int(lines[0])
    info["entries"] = {}
    for line in lines[1:]:
        index = int(line.strip().split(' ', 1)[0], 16) - info["startIndex"]
        info["entries"][index] = line

with open('../../rom/fe7-jp.gba', 'rb') as rom:
    rom.seek(info["start"])
    for i in range(info["amount"]):
        entry = bitstruct.unpack(info["format"], rom.read(bitstruct.calcsize(info["format"]) // 8))
        comment = " // " + info["entries"].get(i, "")
        if "bitfield" not in info:
            print(entry, ",", comment)
        else:
            start = info["bitfield"][0] - 1
            end = info["bitfield"][1] - 1
            e = list(entry[:start])
            length = end - start
            byteNum = length // 8
            for n in range(byteNum):
                byte = list(entry[start + 8 * n: start + 8 * n + 8])
                byte.reverse()
                e += byte
            e += list(entry[start + 8 * byteNum:])
            print(e, ",", comment)
