#### armv8l-toolchain-linux
Toolchain for linux x86_64 host and armv8l-linux-gnueabihf target optimized for cortex-a53 (Raspberry Pi 3).

Checkout to `/usr/local/armv8l-unknown-linux-gnueabihf` and add `/usr/local/armv8l-unknown-linux-gnueabihf/bin` to *PATH*.

# Components and Versions
* gcc 8.1.0 (patched against 85764), glibc 2.26, binutils 2.30, gdb 8.1 (built with crosstool-ng)
* boost 1.67.0
* OpenCV 3.2.0
* Raspicam (https://github.com/cedricve/raspicam) c4c0dc1
* Qt 5.8.1
* System libraries are taken from FedBerry 25, Linux 4.9.21

