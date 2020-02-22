cmake_minimum_required(VERSION 3.15)
project(Preprocessor C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

include(GNUInstallDirs)

set(PREPROCESSOR_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(Preprocessor INTERFACE)
target_include_directories(Preprocessor INTERFACE include/)

add_subdirectory(Tests)

install(DIRECTORY include/Preprocessor
        DESTINATION ${CMAKE_INSTALL_FULL_INCLUDEDIR})
