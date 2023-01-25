#include <assert.h>

#include "http.h"

void post_request_json_test(void) {
    // arrange
    const char *url = "http://localhost:3000";
    const char *json = "{\n"
    "   \"firstname\": \"firstname\",\n"
    "   \"lastname\": \"lastname\"\n"
    "}";

    // act
    int result = post_request_json(url, json);

    // assert
    assert(result == 0 && "invalid result");
}

int main(int argc, char *argv[]) {
    void (*tests[])(void) = {
        post_request_json_test
    };
    int test_count = sizeof(tests) / sizeof(void (*)(void));
    for(int i = 0; i < test_count; i++) {
        tests[i]();
    }
    return 0;
}
