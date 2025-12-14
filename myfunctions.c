/* myfunctions.c */

#include "myfuntions.h"

/*
 * Function definitions corresponding to the prototypes
 */

int add_two_numbers(int a, int b) {
    return a + b;
}

void print_greeting(const char *name) {
    if (name == NULL) {
        printf("Hello, world!\n");
    } else {
        printf("Hello, %s!\n", name);
    }
}

int is_even(int n) {
    return (n % 2 == 0);
}
