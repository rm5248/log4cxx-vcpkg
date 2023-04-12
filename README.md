# Test log4cxx with vcpkg

1. checkout vcpkg
2. bootstrap vcpkg(see vcpkg directions)
3. try to build this with cmake.  Change toolchain file location to match your system:
```
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=/home/robert/train-stuff/vcpkg/scripts/buildsystems/vcpkg.cmake
```
4. build:
```
cmake --build build
```
