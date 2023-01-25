#include <assert.h>

#include "filesys.h"

void write_text_test(void) {
    // arrange
    const char* dest_path = "./logs/tests/filesys/write_text_test.log";
    const char* text = "write_text_test";

    // act
    int result = write_text(dest_path, text);

    // assert
    assert(result == 0 && "write text failed");
}

int main(int argc, char *argv[]) {
    void (*tests[])(void) = {
        write_text_test
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}
