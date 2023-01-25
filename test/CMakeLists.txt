set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/test)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/test)

add_executable(ctemplate-tests main.c)

add_subdirectory(validator)
add_subdirectory(list)
add_subdirectory(filesys)
add_subdirectory(http)

target_link_libraries(ctemplate-tests
    validator-tests
    list-tests
    filesys-tests
    http-tests
)

file(GLOB_RECURSE HRD_FILES **/*.h)
file(COPY ${HRD_FILES} DESTINATION ${CMAKE_SOURCE_DIR}/include/test)
