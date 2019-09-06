# RESTBuilder TopLevel CMakeLists
cmake_minimum_required(VERSION 3.13)
project("libreparse" VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(LIBREPARSE_HEADERS include/stdafx.h include/targetver.h include/reparseForGo.h include/reparselib.h)
set(LIBREPARSE_SOURCES stdafx.cpp dllmain.cpp reparselib.cpp symlink.cpp)

# Add main library
add_library(${PROJECT_NAME} ${LIBREPARSE_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)

