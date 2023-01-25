include_directories(${CMAKE_SOURCE_DIR}/src/http/)
add_library(http-tests http-tests.c http-tests.h)
target_link_libraries(http-tests http)
