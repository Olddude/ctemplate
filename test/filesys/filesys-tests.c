#include <assert.h>

#include "filesys.h"
#include "filesys-tests.h"

void write_text_test(void) {
    // arrange
    const char* dest_path = "write_text_test.log";
    const char* text = "write_text_test";

    // act
    int result = write_text(dest_path, text);

    // assert
    assert(result == 0 && "write text failed");
}

