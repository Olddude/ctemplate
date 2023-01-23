include_directories(${CMAKE_SOURCE_DIR}/src/list/)
add_library(list-tests list-tests.c list-tests.h)
target_link_libraries(list-tests list)
