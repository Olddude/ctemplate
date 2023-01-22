#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

void list_init_list_test() {
    // arrange
    LIST list;

    // act
    int result = init_list(&list);

    // assert
    assert(result == 0);
}

int main() {
    list_init_list_test();
    return 0;
}
