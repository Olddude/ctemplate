if(APPLE)
    find_library(UUID uuid)
else()
    find_library(UUID uuid HINTS /usr/lib /usr/local/lib)
endif()

add_library(queue queue.c queue.h)

target_link_libraries(queue
    # own libraries
    filesys
    http

    # third party libraries
    ${UUID}
)
