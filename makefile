linux:
	gcc ./c/GetBitches.c -o GetBitches.out -Os -Wno-Unused-result
	strip ./GetBitches.out

windows:
	x86_64-w64-mingw32-gcc -Os -o GetBitches.exe ./c/GetBitches.c
	x86_64-w64-mingw32-strip ./GetBitches.exe
mac:
	gcc ./c/GetBitches.c -o GetBitches.app -Os -Wno-Unused-result
	strip ./GetBitches.app
raspi:
	arm-linux-gnueabihf-gcc ./c/GetBitches.c -o GetBitches-raspi.out -Os -Wno-Unused-result
	arm-linux-gnueabihf-strip ./GetBitches-raspi.out
aarch64:
	aarch64-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-aarch64.out -Os -Wno-Unused-result
	aarch64-linux-gnu-strip ./GetBitches-aarch64.out
i386:
	gcc -m32 ./c/GetBitches.c -o GetBitches-i386.out -Os
	strip ./GetBitches-i386.out
ppc:
	powerpc-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-PowerPC.out -Os -Wno-Unused-result
	powerpc-linux-gnu-strip ./GetBitches-PowerPC.out
mips:
	mips-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-MIPS.out -Os -Wno-Unused-result
	mips-linux-gnu-strip ./GetBitches-MIPS.out