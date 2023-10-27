# Remote Vehicle Control Application - C++/Qt6
This is a prototypical application for operating remote control vehicles. It is being built in C++ with Qt6 to evaluate the suitability of Qt for this purpose.

## Contents
- [Remote Vehicle Control Application - C++/Qt6](#remote-vehicle-control-application---cqt6)
	- [Contents](#contents)
	- [Dependencies](#dependencies)
	- [Build](#build)
	- [Run](#run)

## Dependencies
* A C++ compiler
* Qt6 version associated with the compiler vendor
* CMake

## Build
Configure and build the project through CMake. You may need to point CMake toward the Qt installation. Example of configuring the project to build with Ninja/g++ on MSYS2 MinGW x64
```
cmake -S . -B build -G Ninja -DCMAKE_PREFIX_PATH=/c/Qt/6.6.0/mingw_64
```
Build:
```
cmake --build build
```
## Run
Qt6 is dynamically linked, so ensure the binaries are accessible on the PATH environment variable. MSYS2 MinGW on Windows overrides the system PATH, so this may require action on this toolchain. A simple solution is adding a line to `.bashrc` appending the Qt bin to PATH:
```
# Add Qt6 binaries to PATH
export PATH=$PATH:/c/Qt/6.6.0/mingw_64/bin
```