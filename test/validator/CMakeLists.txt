include_directories(${CMAKE_SOURCE_DIR}/src/validator/)
add_library(validator-tests validator-tests.c validator-tests.h)
target_link_libraries(validator-tests validator)
