set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_BUI)

add_executable(ctemplate main.c)

add_subdirectory(benchmark)
add_subdirectory(csv)
add_subdirectory(list)
add_subdirectory(queue)
add_subdirectory(validator)
add_subdirectory(filesys)
add_subdirectory(http)

target_link_libraries(ctemplate
    benchmark
    csv
    list
    queue
    validator
    filesys
    http
)

file(GLOB_RECURSE HRD_FILES **/*.h)
file(COPY ${HRD_FILES} DESTINATION ${CMAKE_SOURCE_DIR}/include)
