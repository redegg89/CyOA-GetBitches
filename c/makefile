linux:
	gcc ./GetBitches.c -o GetBitches.out -Os -lSDL2 -lSDL2_mixer -DSDL
	strip ./GetBitches.out

win64:
	x86_64-w64-mingw32-gcc -Os -o GetBitches-win64.exe ./GetBitches.c
	x86_64-w64-mingw32-strip ./GetBitches-win64.exe
win64-sdl:
	x86_64-w64-mingw32-gcc -Os -o GetBitches-win64.exe ./c/GetBitches.c -DSDL -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer -mwindows
	x86_64-w64-mingw32-strip ./GetBitches-win64.exe
win32:
	i686-w64-mingw32-gcc -m32 -Os -o GetBitches-win32.exe ./GetBitches.c
	i686-w64-mingw32-strip ./GetBitches-win32.exe
mac:
	gcc ./GetBitches.c -o GetBitches.app -Os -Wno-Unused-result
	strip ./GetBitches.app
raspi:
	arm-linux-gnueabihf-gcc ./GetBitches.c -o GetBitches-raspi.out -Os
	arm-linux-gnueabihf-strip ./GetBitches-raspi.out
aarch64:
	aarch64-linux-gnu-gcc ./GetBitches.c -o GetBitches-aarch64.out -Os
	aarch64-linux-gnu-strip ./GetBitches-aarch64.out
i386:
	gcc -m32 ./GetBitches.c -o GetBitches-i386.out -Os
	strip ./GetBitches-i386.out
ppc:
	powerpc-linux-gnu-gcc  ./GetBitches.c -o GetBitches-PowerPC.out -Os
	powerpc-linux-gnu-strip ./GetBitches-PowerPC.out
mips:
	mips-linux-gnu-gcc ./GetBitches.c -o GetBitches-MIPS.out -Os
	mips-linux-gnu-strip ./GetBitches-MIPS.out
riscv:
	riscv64-linux-gnu-gcc ./GetBitches.c -o GetBitches-RISCV.out -Os
	riscv64-linux-gnu-strip ./GetBitches-RISCV.out