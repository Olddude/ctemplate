#include <assert.h>

#include "validator/validator.h"
#include "validator-test.h"

void validate_test(void) {
    // arrange
    int argc = 4;
    char *argv = { "foo", "bar", "foo2", "bar2" };

    // act
    int result = validate(argc, argv);

    //assert
    assert(result == 0 && "invalid validation");
}
