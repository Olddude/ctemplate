# Collect all source files and headers recursive
file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/**/*.*)

# Add libraries
add_library(ctemplate ${SRC_FILES})

# Add executable
add_executable(ctemplate-cli ${CMAKE_CURRENT_SOURCE_DIR}/main.c)

# Add libraries to executable
target_link_libraries(ctemplate-cli ctemplate)
