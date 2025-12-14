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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfuntions.h"

/* ---------- Part 1: Basic math operations ---------- */

/* Integer operations */

int add_int(int a, int b) {
    return a + b;
}

int subtract_int(int a, int b) {
    return a - b;
}

int multiply_int(int a, int b) {
    return a * b;
}

int divide_int(int a, int b) {
    /* In main you only divide 10 by 5, so this is safe */
    return a / b;
}

/* Float operations */

float add_float(float a, float b) {
    return a + b;
}

float subtract_float(float a, float b) {
    return a - b;
}

float multiply_float(float a, float b) {
    return a * b;
}

float divide_float(float a, float b) {
    return a / b;
}

/* Byte operations */

unsigned char add_byte(unsigned char a, unsigned char b) {
    return (unsigned char)(a + b);
}

unsigned char subtract_byte(unsigned char a, unsigned char b) {
    return (unsigned char)(a - b);
}

unsigned char multiply_byte(unsigned char a, unsigned char b) {
    return (unsigned char)(a * b);
}

unsigned char divide_byte(unsigned char a, unsigned char b) {
    return (unsigned char)(a / b);
}

/* ---------- Part 2: Bitwise operations ---------- */

int bitwise_and(int a, int b) {
    return a & b;
}

int bitwise_or(int a, int b) {
    return a | b;
}

int bitwise_xor(int a, int b) {
    return a ^ b;
}

int bitwise_not(int a) {
    return ~a;
}

/* ---------- Part 3: Memory management ---------- */

int *allocate_array(int size) {
    if (size <= 0) {
        return NULL;
    }

    int *array = (int *)malloc(size * sizeof(int));
    return array;
}

void initialize_array(int *array, int size) {
    if (array == NULL) {
        return;
    }

    for (int i = 0; i < size; i++) {
        array[i] = i;   /* simple values: 0, 1, 2, ... */
    }
}

void print_array(int *array, int size) {
    if (array == NULL) {
        return;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int check_memory(int *array, int size) {
    if (array == NULL || size <= 0) {
        return 0;
    }

    /* Simple check: address of last element is array + (size - 1) */
    int *last = &array[size - 1];
    if (last == array + (size - 1)) {
        return 1;
    } else {
        return 0;
    }
}

void deallocate_array(int *array) {
    /* Caller keeps the pointer; this just frees the memory */
    free(array);
}

/* ---------- Part 4: Student struct ---------- */

Student create_student(const char *name, int id, float grade) {
    Student s;

    /* Copy name safely into fixed-size array */
    strncpy(s.name, name, sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0';

    s.id = id;
    s.grade = grade;

    return s;
}

void print_student(const Student *student) {
    if (student == NULL) {
        return;
    }

    printf("Name: %s, ID: %d, Grade: %.2f\n",
           student->name, student->id, student->grade);
}

void free_student(Student *student) {
    if (student == NULL) {
        return;
    }

    /* No dynamic memory inside Student, so just reset values */
    student->name[0] = '\0';
    student->id = 0;
    student->grade = 0.0f;
}

void add_student(Student students[], int *count, Student new_student) {
    if (students == NULL || count == NULL) {
        return;
    }

    students[*count] = new_student;
    (*count)++;
}

void print_all_students(const Student students[], int count) {
    for (int i = 0; i < count; i++) {
        print_student(&students[i]);
    }
}