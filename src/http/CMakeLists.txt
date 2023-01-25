add_library(http http.c http.h)
target_link_libraries(http ${CURL_LIBRARIES})
