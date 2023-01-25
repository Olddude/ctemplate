#include <assert.h>

#include "http.h"
#include "http-tests.h"

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
