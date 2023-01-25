#include <assert.h>

#include "validator.h"

void validate_test(void) {
    // arrange
    int argc = 4;
    char *argv[] = { "", "", "", "" };

    // act
    int result = validate(argc, argv);

    //assert
    assert(result == 0 && "invalid validation");
}

int main(int argc, char *argv[]) {
    void (*tests[])(void) = {
        validate_test
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}
