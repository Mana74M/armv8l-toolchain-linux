
add_library(Qt5::QMinimalEglIntegrationPlugin MODULE IMPORTED)

_populate_Gui_plugin_properties(QMinimalEglIntegrationPlugin RELEASE "platforms/libqminimalegl.a")

list(APPEND Qt5Gui_PLUGINS Qt5::QMinimalEglIntegrationPlugin)
