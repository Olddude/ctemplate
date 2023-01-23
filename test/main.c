#include "validator/validator-tests.h"
#include "list/list-tests.h"

int main(void) {
    void (*tests[])(void) = {
        validate_test,
        init_list_test
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}
