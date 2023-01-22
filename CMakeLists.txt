cmake_minimum_required(VERSION 3.10)
project(ctemplate)

# Set the binary output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Set other compiler flags
set(CMAKE_C_STANDARD 11) # 11 is needed for iSH support
# set(CMAKE_C_FLAGS "-Ofast") #optimize binary code - comment that in for debugging

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
add_executable(tests
    ${CMAKE_CURRENT_SOURCE_DIR}/tests/tests.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tests/tests.h
)

# # Add a test - unstable yet
# add_test(list_test ctemplate-tests)

# Link libraries to the executable
target_link_libraries(tests ctemplate)
