add_executable(ctemplate-tests main.c)

add_subdirectory(validator)

target_link_libraries(ctemplate-tests validator)
