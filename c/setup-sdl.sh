#!/bin/sh
wget https://github.com/libsdl-org/SDL/releases/download/release-2.24.0/SDL2-devel-2.24.0-mingw.zip
unzip ./SDL2-devel-2.24.0-mingw.zip
cd SDL2-2.24.0
sudo make install-package arch=x86_64-w64-mingw32 prefix=/usr/lib/gcc/x86_64-w64-mingw32/9.3-win32/
wget https://github.com/libsdl-org/SDL_mixer/releases/download/release-2.6.2/SDL2_mixer-devel-2.6.2-mingw.zip
unzip SDL2_mixer-devel-2.6.2-mingw.zip
cd SDL2_mixer-2.6.2
sudo make install-package arch=x86_64-w64-mingw32 prefix=/usr/lib/gcc/x86_64-w64-mingw32/9.3-win32/
wget https://github.com/libsdl-org/SDL_mixer/releases/download/release-2.6.2/SDL2_mixer-2.6.2-win32-x64.zip
unzip SDL2_mixer-2.6.2-win32-x64.zip
wget https://github.com/libsdl-org/SDL/releases/download/release-2.24.0/SDL2-2.24.0-win32-x64.zip
unzip SDL2-2.24.0-win32-x64.zip