linux:
	gcc ./c-port/GetBitches.c -o GetBitches.out -Ofast

windows:
	x86_64-w64-mingw32-gcc -Ofast -o GetBitches.exe ./c-port/GetBitches.c
