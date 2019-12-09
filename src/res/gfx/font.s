
@{{BLOCK(font)

@=======================================================================
@
@	font, 256x24@4, 
@	+ palette 16 entries, not compressed
@	+ 96 tiles not compressed
@	Total size: 32 + 3072 = 3104
@
@	Time-stamp: 2019-12-08, 12:51:25
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global fontTiles		@ 3072 unsigned chars
	.hidden fontTiles
fontTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00000000,0x00011000,0x00000000
	.word 0x01101100,0x00110110,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x11011000,0x11011000,0x11111110,0x01101100,0x01101100,0x11111110,0x00110110,0x00110110
	.word 0x01101100,0x01111100,0x11101110,0x01111110,0x11101100,0x11101110,0x01111100,0x01101100
	.word 0x01110110,0x00111111,0x00111011,0x01111110,0x11011100,0x11111100,0x01101110,0x00000000
	.word 0x00011100,0x00000110,0x00110110,0x01111100,0x00110110,0x00110110,0x01111100,0x00000000
	.word 0x00110000,0x00011000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00110000,0x00011000,0x00001100,0x00001100,0x00001100,0x00011000,0x00110000,0x00000000
	.word 0x00001100,0x00011000,0x00110000,0x00110000,0x00110000,0x00011000,0x00001100,0x00000000
	.word 0x00011000,0x01011010,0x00111100,0x01011010,0x00011000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00011000,0x00011000,0x01111110,0x00011000,0x00011000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00001100,0x00000110,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00111100,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00001100,0x00001100,0x00000000
	.word 0x01110000,0x00110000,0x00111000,0x00011000,0x00011100,0x00001100,0x00001110,0x00000000

	.word 0x00111100,0x01100110,0x01110110,0x01101110,0x01100110,0x01100110,0x00111100,0x00000000
	.word 0x00011000,0x00011100,0x00011010,0x00011000,0x00011000,0x00011000,0x01111110,0x00000000
	.word 0x00111100,0x01100110,0x01100000,0x00111000,0x00001100,0x00000110,0x01111110,0x00000000
	.word 0x00111100,0x01100110,0x01100000,0x00111000,0x01100000,0x01100110,0x00111100,0x00000000
	.word 0x01101100,0x01101100,0x01100110,0x01111110,0x01100000,0x01100000,0x01100000,0x00000000
	.word 0x01111110,0x00000110,0x00000110,0x00111110,0x01100000,0x01100110,0x00111100,0x00000000
	.word 0x00111100,0x01100110,0x00000110,0x00111110,0x01100110,0x01100110,0x00111100,0x00000000
	.word 0x01111110,0x01100000,0x00110000,0x00011000,0x00011000,0x00011000,0x00011000,0x00000000

	.word 0x00111100,0x01100110,0x01100110,0x00111100,0x01100110,0x01100110,0x00111100,0x00000000
	.word 0x00111100,0x01100110,0x01100110,0x01111100,0x01100000,0x01100110,0x00111100,0x00000000
	.word 0x00000000,0x00001100,0x00001100,0x00000000,0x00000000,0x00001100,0x00001100,0x00000000
	.word 0x00000000,0x00001100,0x00001100,0x00000000,0x00000000,0x00001100,0x00000110,0x00000000
	.word 0x01100000,0x00110000,0x00011000,0x00001100,0x00011000,0x00110000,0x01100000,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x00000000,0x00111100,0x00000000,0x00000000,0x00000000
	.word 0x00000110,0x00001100,0x00011000,0x00110000,0x00011000,0x00001100,0x00000110,0x00000000
	.word 0x00111100,0x01100110,0x01100110,0x00110000,0x00011000,0x00000000,0x00011000,0x00000000

	.word 0x01111100,0x11000110,0x11110110,0x11010110,0x11110110,0x00000110,0x00111100,0x00000000
	.word 0x00111100,0x01100110,0x01100110,0x01111110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00111110,0x01100110,0x01100110,0x00111110,0x01100110,0x01100110,0x00111110,0x00000000
	.word 0x00111100,0x01100110,0x00000110,0x00000110,0x00000110,0x01100110,0x00111100,0x00000000
	.word 0x00111110,0x01100110,0x01100110,0x01100110,0x01100110,0x01100110,0x00111110,0x00000000
	.word 0x01111110,0x00000110,0x00000110,0x00111110,0x00000110,0x00000110,0x01111110,0x00000000
	.word 0x01111110,0x00000110,0x00000110,0x00111110,0x00000110,0x00000110,0x00000110,0x00000000
	.word 0x00111100,0x01100110,0x00000110,0x01110110,0x01100110,0x01100110,0x00111100,0x00000000

	.word 0x01100110,0x01100110,0x01100110,0x01111110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00111100,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00111100,0x00000000
	.word 0x01111000,0x01100000,0x01100000,0x01100000,0x01100000,0x01100110,0x00111100,0x00000000
	.word 0x01100110,0x01100110,0x00110110,0x00011110,0x00110110,0x01100110,0x01100110,0x00000000
	.word 0x00000110,0x00000110,0x00000110,0x00000110,0x00000110,0x00000110,0x01111110,0x00000000
	.word 0x11000110,0x11101110,0x11010110,0x11000110,0x11000110,0x11000110,0x11000110,0x00000000
	.word 0x01100110,0x01101110,0x01110110,0x01100110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00111100,0x01100110,0x01100110,0x01100110,0x01100110,0x01100110,0x00111100,0x00000000

	.word 0x00111110,0x01100110,0x01100110,0x00111110,0x00000110,0x00000110,0x00000110,0x00000000
	.word 0x00111100,0x01100110,0x01100110,0x01100110,0x01110110,0x01100110,0x10111100,0x00000000
	.word 0x00111110,0x01100110,0x01100110,0x00111110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00111100,0x01100110,0x00000110,0x00111100,0x01100000,0x01100110,0x00111100,0x00000000
	.word 0x01111110,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00000000
	.word 0x01100110,0x01100110,0x01100110,0x01100110,0x01100110,0x01100110,0x00111100,0x00000000
	.word 0x01100110,0x01100110,0x01100110,0x01100110,0x01100110,0x00111100,0x00011000,0x00000000
	.word 0x11000110,0x11000110,0x11000110,0x11000110,0x11010110,0x01111100,0x00101000,0x00000000

	.word 0x01100110,0x01100110,0x00111100,0x00011000,0x00111100,0x01100110,0x01100110,0x00000000
	.word 0x01100110,0x01100110,0x00111100,0x00011000,0x00011000,0x00011000,0x00011000,0x00000000
	.word 0x01111110,0x01100000,0x00110000,0x00011000,0x00001100,0x00000110,0x01111110,0x00000000
	.word 0x00111100,0x00001100,0x00001100,0x00001100,0x00001100,0x00001100,0x00111100,0x00000000
	.word 0x00001110,0x00001100,0x00011100,0x00011000,0x00111000,0x00110000,0x01110000,0x00000000
	.word 0x00111100,0x00110000,0x00110000,0x00110000,0x00110000,0x00110000,0x00111100,0x00000000
	.word 0x00011000,0x00111100,0x01100110,0x01000010,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x11111111,0x00000000

	.word 0x00001100,0x00011000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x01100110,0x01100110,0x01100110,0x01111100,0x00000000
	.word 0x00000110,0x00000110,0x00111110,0x01100110,0x01100110,0x01100110,0x00111110,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x01100110,0x00000110,0x01100110,0x00111100,0x00000000
	.word 0x01100000,0x01100000,0x01111100,0x01100110,0x01100110,0x01100110,0x01111100,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x01100110,0x01111110,0x00000110,0x00111100,0x00000000
	.word 0x00111000,0x01101100,0x00001100,0x00011110,0x00001100,0x00001100,0x00001100,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x01100110,0x01100110,0x01111100,0x01100000,0x00111100

	.word 0x00000110,0x00000110,0x00111110,0x01100110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00011000,0x00000000,0x00011100,0x00011000,0x00011000,0x00011000,0x00111100,0x00000000
	.word 0x00011000,0x00000000,0x00011100,0x00011000,0x00011000,0x00011000,0x00011000,0x00001110
	.word 0x00000110,0x00000110,0x01100110,0x00110110,0x00011110,0x00110110,0x01100110,0x00000000
	.word 0x00011100,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00000000
	.word 0x00000000,0x00000000,0x01101110,0x11111110,0x11010110,0x11010110,0x11010110,0x00000000
	.word 0x00000000,0x00000000,0x00111110,0x01100110,0x01100110,0x01100110,0x01100110,0x00000000
	.word 0x00000000,0x00000000,0x00111100,0x01100110,0x01100110,0x01100110,0x00111100,0x00000000

	.word 0x00000000,0x00000000,0x00111110,0x01100110,0x01100110,0x01100110,0x00111110,0x00000110
	.word 0x00000000,0x00000000,0x01111100,0x01100110,0x01100110,0x01100110,0x01111100,0x01100000
	.word 0x00000000,0x00000000,0x00111110,0x01100110,0x00000110,0x00000110,0x00000110,0x00000000
	.word 0x00000000,0x00000000,0x01111100,0x00001110,0x00111100,0x01110000,0x00111110,0x00000000
	.word 0x00000000,0x00011000,0x00111100,0x00011000,0x00011000,0x00011000,0x00110000,0x00000000
	.word 0x00000000,0x00000000,0x01100110,0x01100110,0x01100110,0x01100110,0x00111100,0x00000000
	.word 0x00000000,0x00000000,0x01100110,0x01100110,0x01100110,0x00111100,0x00011000,0x00000000
	.word 0x00000000,0x00000000,0x11000110,0x11000110,0x11000110,0x11010110,0x01101100,0x00000000

	.word 0x00000000,0x00000000,0x01100110,0x00111100,0x00011000,0x00111100,0x01100110,0x00000000
	.word 0x00000000,0x00000000,0x01100110,0x01100110,0x01100110,0x01111100,0x01100000,0x00111100
	.word 0x00000000,0x00000000,0x01111110,0x00110000,0x00011000,0x00001100,0x01111110,0x00000000
	.word 0x00011000,0x00001100,0x00001100,0x00000110,0x00001100,0x00001100,0x00011000,0x00000000
	.word 0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000,0x00011000
	.word 0x00011000,0x00110000,0x00110000,0x01100000,0x00110000,0x00110000,0x00011000,0x00000000
	.word 0x00000000,0x00001100,0x01011110,0x01111010,0x00110000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global fontPal		@ 32 unsigned chars
	.hidden fontPal
fontPal:
	.hword 0x7C1F,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(font)
