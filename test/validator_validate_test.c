#include <assert.h>

#include "validator.h"

void validator_validate_test() {
    // arrange
    int argc = 4;
    char *argv[] = { "asd", "dsf", "asd", "sadd" };

    // act
    int result = validate(argc, argv);

    // assert
    assert(result == 0 && "validator_validate_test failed");
}

int main() {
    validator_validate_test();
    return 0;
}
