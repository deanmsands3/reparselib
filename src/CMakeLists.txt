# RESTBuilder TopLevel CMakeLists
cmake_minimum_required(VERSION 3.10)
project("reparselib" VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(REPARSELIB_HEADERS include/stdafx.h include/targetver.h include/reparseForGo.h include/reparselib.h)
set(REPARSELIB_SOURCES stdafx.cpp dllmain.cpp reparselib.cpp symlink.cpp)

# Add main library
add_library(${PROJECT_NAME} SHARED ${REPARSELIB_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_compile_definitions(${PROJECT_NAME} PRIVATE "-DREPARSELIB_EXPORTS")
