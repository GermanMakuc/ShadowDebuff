AC_ADD_SCRIPT("${CMAKE_CURRENT_LIST_DIR}/src/ShadowDebuff.cpp")
AC_ADD_SCRIPT_LOADER("ShadowDebuff" "${CMAKE_CURRENT_LIST_DIR}/src/loader.h")

AC_ADD_CONFIG_FILE("${CMAKE_CURRENT_LIST_DIR}/conf/Shadow.conf.dist")