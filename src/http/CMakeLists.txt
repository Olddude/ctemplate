find_library(CURL curl)
add_library(http http.c http.h)
target_link_libraries(http
    # third party libraries
    ${CURL}
)
