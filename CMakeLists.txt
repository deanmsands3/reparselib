# RESTBuilder TopLevel CMakeLists
cmake_minimum_required(VERSION 3.0)
project("src/libreparse" VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# Add the GNU Install dirs for the benefit of CPack (will implement later)
include(GNUInstallDirs)

# Add libs in subfolders
add_subdirectory(src/libreparse)

# Add Library Test
set(LIBREPARSE_TEST test)
set(LIBREPARSE_TEST_SOURCES test/main.cpp)
add_executable(${LIBREPARSE_TEST} ${LIBREPARSE_TEST_SOURCES})
target_link_libraries(${LIBREPARSE_TEST} PUBLIC src/libreparse)
