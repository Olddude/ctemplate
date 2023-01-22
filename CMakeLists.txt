cmake_minimum_required(VERSION 3.10)
project(ctemplate)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_C_STANDARD 11)
# set(CMAKE_C_FLAGS "-Ofast") #optimize binary code - comment that in for debugging

add_subdirectory(src)
add_subdirectory(test)
