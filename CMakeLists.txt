cmake_minimum_required(VERSION 3.10)
project(ctemplate)

# Set the binary output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Set other compiler flags
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_FLAGS "-Ofast")

# Add the include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE HDR_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

# Add libraries
add_library(ctemplate ${SRC_FILES} ${HDR_FILES})

# Add executable
add_executable(ctemplate-cli ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)

# Link libraries to the executable
target_link_libraries(ctemplate-cli ctemplate)

# Add test executable
add_executable(ctemplate-tests ${CMAKE_CURRENT_SOURCE_DIR}/tests/main.c)

# Link libraries to the executable
target_link_libraries(ctemplate-tests ctemplate)
