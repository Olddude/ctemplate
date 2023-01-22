# Collect all source files and headers recursive
file(GLOB_RECURSE SRC_FILES **/*.*)

# Add executable
add_executable(ctemplate main.c)

add_subdirectory(benchmark)
add_subdirectory(csv)
add_subdirectory(list)
add_subdirectory(queue)
add_subdirectory(validator)

# Add libraries to executable
target_link_libraries(ctemplate
    benchmark
    csv
    list
    queue
    validator
)
