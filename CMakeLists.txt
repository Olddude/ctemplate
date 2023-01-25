cmake_minimum_required(VERSION 3.10)
project(ctemplate)

set(CMAKE_C_STANDARD 11)
# set(CMAKE_C_FLAGS "-Ofast") #optimize binary code - comment that in for debugging
set(CMAKE_EXE_LINKER_FLAGS "-lcurl")

add_subdirectory(src)
add_subdirectory(test)
