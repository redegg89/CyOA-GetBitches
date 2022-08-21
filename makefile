linux:
	gcc ./c/GetBitches.c -o GetBitches.out -Os
	strip ./GetBitches.out

win64:
	x86_64-w64-mingw32-gcc -Os -o GetBitches-win64.exe ./c/GetBitches.c
	x86_64-w64-mingw32-strip ./GetBitches-win64.exe
win32:
	i686-w64-mingw32-gcc -m32 -Os -o GetBitches-win32.exe ./c/GetBitches.c
	i686-w64-mingw32-strip ./GetBitches-win32.exe
mac:
	gcc ./c/GetBitches.c -o GetBitches.app -Os -Wno-Unused-result
	strip ./GetBitches.app
raspi:
	arm-linux-gnueabihf-gcc ./c/GetBitches.c -o GetBitches-raspi.out -Os 
	arm-linux-gnueabihf-strip ./GetBitches-raspi.out
aarch64:
	aarch64-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-aarch64.out -Os
	aarch64-linux-gnu-strip ./GetBitches-aarch64.out
i386:
	gcc -m32 ./c/GetBitches.c -o GetBitches-i386.out -Os
	strip ./GetBitches-i386.out
ppc:
	powerpc-linux-gnu-gcc  ./c/GetBitches.c -o GetBitches-PowerPC.out -Os
	powerpc-linux-gnu-strip ./GetBitches-PowerPC.out
mips:
	mips-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-MIPS.out -Os
	mips-linux-gnu-strip ./GetBitches-MIPS.out
riscv:
	riscv64-linux-gnu-gcc ./c/GetBitches.c -o GetBitches-RISCV.out -Os
	riscv64-linux-gnu-strip ./GetBitches-RISCV.out