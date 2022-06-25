linux:
	gcc ./c/GetBitches.c -o GetBitches.out -Ofast

windows:
	x86_64-w64-mingw32-gcc -Ofast -o GetBitches.exe ./c/GetBitches.c

mac:
	gcc ./c/GetBitches.c -o GetBitches.app -Ofast
