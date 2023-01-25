#include "validator/validator-tests.h"
#include "list/list-tests.h"
#include "filesys/filesys-tests.h"
#include "http/http-tests.h"

int main(void) {
    void (*tests[])(void) = {
        validate_test,
        init_list_test,
        write_text_test,
        post_request_json_test,
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}

