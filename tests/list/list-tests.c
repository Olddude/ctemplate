#include <assert.h>

#include "list.h"

void init_list_test(void) {
    // arrange
    LIST list;

    // act
    int result = init_list(&list);

    // assert
    assert(result == 0 && "invalid result");
}

int main(int argc, char *argv[]) {
    void (*tests[])(void) = {
        init_list_test
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}
