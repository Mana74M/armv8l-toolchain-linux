host_build {
    QT_CPU_FEATURES.x86_64 = mmx sse sse2
} else {
    QT_CPU_FEATURES.arm = neon
}
QT.global_private.enabled_features = dbus gui network posix_fallocate qml-debug reduce_exports release_tools sql system-zlib testlib widgets xml
QT.global_private.disabled_features = android-style-assets sse2 dbus-linked private_tests libudev reduce_relocations
PKG_CONFIG_EXECUTABLE = /usr/bin/pkg-config
QT_COORD_TYPE = double
QMAKE_LIBS_ZLIB = -lz
CONFIG += cross_compile enable_new_dtags largefile neon precompile_header
QT_BUILD_PARTS += libs tools
QT_HOST_CFLAGS_DBUS += -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include
