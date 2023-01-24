include_directories(${CMAKE_SOURCE_DIR}/src/filesys/)
add_library(filesys-tests filesys-tests.c filesys-tests.h)
target_link_libraries(filesys-tests filesys)
