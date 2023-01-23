#include <assert.h>

#include "list.h"
#include "list-tests.h"

void init_list_test(void) {
    // arrange
    LIST list;

    // act
    int result = init_list(&list);

    // assert
    assert(result == 0 && "invalid result");
}
