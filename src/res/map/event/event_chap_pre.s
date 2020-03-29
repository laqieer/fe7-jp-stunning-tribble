	.section .rodata
	.align 2
	.global event_chap_pre
event_chap_pre:
PointerList:
	.word TurnBasedEvents
	.word CharacterBasedEvents
	.word LocationBasedEvents
	.word MiscBasedEvents
	.word TrapsEliwoodMode
	.word TrapsHectorMode
	.word EnemyUnitsENM
	.word EnemyUnitsENM
	.word EnemyUnitsENM
	.word EnemyUnitsENM
	.word AllyUnitsENM
	.word AllyUnitsENM
	.word AllyUnitsENM
	.word AllyUnitsENM
	.word BeginningScene
	.word EndingScene
TurnBasedEvents:
	.byte 0x02, 0x00, 0x00, 0x00
	.word BeginningScene
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
CharacterBasedEvents:
	.byte 0x00, 0x00, 0x00, 0x00
LocationBasedEvents:
	.byte 0x00, 0x00, 0x00, 0x00
MiscBasedEvents:
	.byte 0x01, 0x00, 0x00, 0x00, 0x1C, 0xF7, 0xD6, 0x08, 0x65, 0x00, 0x00, 0x00
	.byte 0x0E, 0x00, 0x00, 0x00
	.word EndingScene
	.byte 0x5D, 0xAA, 0x07, 0x08
	.byte 0x00, 0x00, 0x00, 0x00
BeginningScene:
    .word 0x3C, initSkillCDForAllUnits
	.byte 0x30, 0x00, 0x00, 0x00
	.word AllyUnitsENM
	.byte 0x39, 0x00, 0x00, 0x00
	.byte 0x3B, 0x00, 0x00, 0x00
	.byte 0x30, 0x00, 0x00, 0x00
	.word EnemyUnitsENM
	.byte 0x39, 0x00, 0x00, 0x00
	.byte 0x76, 0x00, 0x14, 0x04
	.byte 0x0D, 0x00, 0x00, 0x00, 0x40, 0x12, 0x00, 0x00
	.byte 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
EndingScene:
	.byte 0x76, 0x00, 0x17, 0x04
	.byte 0x0D, 0x00, 0x00, 0x00, 0x41, 0x12, 0x00, 0x00
	.byte 0x7F, 0x00, 0x01, 0x00
	.byte 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
AllyUnitsENM:
	.byte 0x01, 0x01, 0x02, 0x08, 0x00, 0x0E, 0x00, 0x0E, 0x01, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x02, 0x03, 0x00, 0x08, 0x00, 0x0D, 0x00, 0x0D, 0x1F, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	// invite Serra to test heal special skill :)
	//.byte 0x11, 0x1d, 0x00, 0x08, 0x00, 0x0C, 0x00, 0x0C, 0x4A, 0x6B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
EnemyUnitsENM:
	.byte 0x88, 0x38, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00
	.byte 0x88, 0x0A, 0x00, 0x0C, 0x0E, 0x05, 0x0E, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00
	.byte 0x88, 0x12, 0x00, 0x0C, 0x0E, 0x13, 0x0E, 0x13, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
TrapsEliwoodMode:
	.byte 0x00
TrapsHectorMode:
	.byte 0x00
