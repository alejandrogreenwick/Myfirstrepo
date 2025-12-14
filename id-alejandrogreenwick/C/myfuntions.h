/* myfunctions.h */

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <stdio.h>  // if your functions need it
#include <stdlib.h> // if needed
#include <string.h> // if needed

/* 
 * Add your function prototypes here.
 * Example prototypes (replace with your real ones):
 */

// Returns the sum of two integers
int add_two_numbers(int a, int b);

// Prints a greeting to stdout
void print_greeting(const char *name);

// Returns 1 if number is even, 0 otherwise
int is_even(int n);

#endif // MYFUNCTIONS_H

/* myfunctions.h */

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <stdio.h>

/* 
 * Function prototypes
 * (Replace these examples with the exact functions your assignment specifies.)
 */

// Prints basic program information to the user
void print_program_information(void);

// Asks the user for an integer with a prompt and returns it
int get_integer_from_user(const char *prompt);

// Returns the sum of two integers
int add_two_numbers(int a, int b);

// Calculates the average given a total sum and a count
double calculate_average(int sum, int count);

// Prints an integer result with a label
void print_result(const char *label, int result);

// Prints a double result with a label
void print_double_result(const char *label, double result);

#endif /* MYFUNCTIONS_H */

/* myfunctions.h */

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <stdio.h>

/* 
 * Struct representing a student
 */
typedef struct {
    char name[50];  // The name of the student
    int id;         // The student's ID number
    float grade;    // The student's GPA
} Student;

/*
 * Function prototypes
 */

/**
 * @brief Initialise a Student with the given values.
 */
void initialise_student(Student *student, const char *name, int id, float grade);

/**
 * @brief Print all details of a Student in a readable format.
 */
void print_student_details(const Student *student);

/**
 * @brief Update the grade (GPA) of a Student.
 */
void update_student_grade(Student *student, float newGrade);

/**
 * @brief Calculate the average grade (GPA) of an array of Students.
 * @return average grade, or 0.0f if numberOfStudents is 0.
 */
float calculate_average_grade(const Student *students, int numberOfStudents);

#endif /* MYFUNCTIONS_H */

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <stdio.h>

/*
 * Struct representing a student
 */
typedef struct {
    char name[50];
    int id;
    float grade;
} Student;

/*
 * Function prototypes
 */

Student create_student(const char *name, int id, float grade);
void print_student(Student student);
void free_student(Student *student);
void add_student(Student students[], int *student_count, Student new_student);
void print_all_students(const Student students[], int student_count);

#endif /* MYFUNCTIONS_H */
