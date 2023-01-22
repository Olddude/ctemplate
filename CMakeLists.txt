cmake_minimum_required(VERSION 3.10)
project(ctemplate)

set(CMAKE_C_STANDARD 11)
# set(CMAKE_C_FLAGS "-Ofast") #optimize binary code - comment that in for debugging

# set the binary output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(src)
add_subdirectory(test)
