#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

#include "list.h"
#include "tests.h"

bool list_test() {
    LIST list;
    bool test_result = false;
    if (init_list(&list) != 0) {
        return test_result;
    } else {
        test_result = true;
        print_list(&list);
        add_to_list(&list, "foobar");
        add_to_list(&list, "barfoo");
        print_list(&list);
    }
    return test_result;
}

void exec_tests(jmp_buf buf) {
    bool result = false;
    result = list_test();
    // add other tests here
    if (result == false) {
        longjmp(buf, 1);
    }
}

int main(int argc, char *argv[]) {
    jmp_buf buf;
    if (setjmp(buf) == 0) {
        exec_tests(buf);
        printf("Test was successful\n");
        return 0;
    } else {
        perror("An exception occurred\n");
        return 1;
    }
}
