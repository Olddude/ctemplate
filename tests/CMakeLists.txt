set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/tests)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(TEST_LIBS
    filesys
    http
    list
    validator
)

foreach(TESTLIB ${TEST_LIBS})
    add_executable(${TESTLIB}-tests ${TESTLIB}/${TESTLIB}-tests.c)
    target_link_libraries(${TESTLIB}-tests ${TESTLIB})
endforeach()
