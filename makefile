linux:
	gcc ./c/GetBitches.c -o GetBitches.out -Ofast
	chmod +x GetBitches.app

windows:
	x86_64-w64-mingw32-gcc -Ofast -o GetBitches.exe ./GetBitches.c

mac:
	gcc ./c/GetBitches.c -o GetBitches.app -Ofast
	chmod +x GetBitches.app
