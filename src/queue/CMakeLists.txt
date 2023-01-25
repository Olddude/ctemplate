find_library(UUID uuid)
add_library(queue queue.c queue.h)
target_link_libraries(queue
    # own libraries
    filesys
    http

    # third party libraries
    ${UUID}
)
