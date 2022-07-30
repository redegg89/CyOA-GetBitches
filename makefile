linux:
	gcc ./c/GetBitches.c -o GetBitches.out -Os
	strip ./GetBitches.out

windows:
	x86_64-w64-mingw32-gcc -Os -o GetBitches.exe ./c/GetBitches.c
	x86_64-w64-mingw32-strip ./GetBitches.exe
mac:
	gcc ./c/GetBitches.c -o GetBitches.app -Os
	strip ./GetBitches.app