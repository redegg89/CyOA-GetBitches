linux:
	g++ ./GetBitches.cpp -o GetBitches.out -Os -lSDL2 -lSDL2_mixer -DSDL
	strip ./GetBitches.out
linux-musl:
	musl-g++ ./GetBitches.cpp -o GetBitches.out -Os -l:libSDL2.a -l:libSDL2_mixer.a -DSDL
	strip ./GetBitches.out
win64:
	x86_64-w64-mingw32-g++ -Os -o GetBitches-win64-noSDL.exe ./GetBitches.cpp
	x86_64-w64-mingw32-strip ./GetBitches-win64-noSDL.exe
win64-sdl:
	x86_64-w64-mingw32-g++ -Os -o GetBitches-win64.exe GetBitches.cpp -DSDL -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer -mwindows
	x86_64-w64-mingw32-strip ./GetBitches-win64.exe
win32:
	i686-w64-mingw32-g++ -m32 -Os -o GetBitches-win32.exe ./GetBitches.cpp
	i686-w64-mingw32-strip ./GetBitches-win32.exe
mac:
	g++ ./GetBitches.cpp -o GetBitches.app -Os -Wno-Unused-result
	strip ./GetBitches.app
raspi:
	arm-linux-gnueabihf-g++ ./GetBitches.cpp -o GetBitches-raspi.out -Os
	arm-linux-gnueabihf-strip ./GetBitches-raspi.out
aarch64:
	aarch64-linux-gnu-g++ ./GetBitches.cpp -o GetBitches-aarch64.out -Os
	aarch64-linux-gnu-strip ./GetBitches-aarch64.out
i386:
	g++ -m32 ./GetBitches.cpp -o GetBitches-i386.out -Os
	strip ./GetBitches-i386.out
ppc:
	powerpc-linux-gnu-g++  ./GetBitches.cpp -o GetBitches-PowerPC.out -Os
	powerpc-linux-gnu-strip ./GetBitches-PowerPC.out
mips:
	mips-linux-gnu-g++ ./GetBitches.cpp -o GetBitches-MIPS.out -Os
	mips-linux-gnu-strip ./GetBitches-MIPS.out
riscv:
	riscv64-linux-gnu-g++ ./GetBitches.cpp -o GetBitches-RISCV.out -Os
	riscv64-linux-gnu-strip ./GetBitches-RISCV.out