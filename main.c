#include <stdio.h>
#include "myfuntions.h"

int main(void) {
    int result = add_two_numbers(5, 7);
    printf("Result: %d\n", result);

    print_greeting("Alice");

    if (is_even(result)) {
        printf("%d is even\n", result);
    } else {
        printf("%d is odd\n", result);
    }

    return 0;
}
#include <stdio.h>
#include "myfuntions.h"

int main(void) {
    print_program_information();

    int a = get_integer_from_user("Enter the first integer: ");
    int b = get_integer_from_user("Enter the second integer: ");

    int sum = add_two_numbers(a, b);
    print_result("Sum", sum);

    double avg = calculate_average(sum, 2);
    print_double_result("Average", avg);

    return 0;
}


/*
* Only uncomment the sections you are told too. No further modifications to this file should be made.
* Do not change function names, arguments, or variables belows, again just uncomment where instructed to do so.
*/

int main() {

    int a_int = 10, b_int = 5;
    float a_float = 10.5, b_float = 5.5;
    unsigned char a_byte = 0x0A, b_byte = 0x05;
    int int_result;
    float float_result;
    unsigned char byte_result;

    /* Part 1
     - Create myfunctions.h and myfunctions.c to hold the prototypes and functionality
       respectivley for the below section
     - The header must include a guard and you need to add the header file to main.c
     - Each function below must be implemented, the name of the function is written in clean
       code, and therefore easy to understands the functions purpose.
     - You can test the code by compiling the code, and running it
     - You must add, commit and push your code incrementally
    */

    /* 
    // Test basic math operations with integers
    int_result = add_int(a_int, b_int);
    printf("Integer Addition: %d +, %d = %d\n", a_int, b_int, int_result);
    
    int_result = subtract_int(a_int, b_int);
    printf("Integer Subtraction: %d , %d = %d\n", a_int, b_int, int_result);
    
    int_result = multiply_int(a_int, b_int);
    printf("Integer Multiplication: %d , %d = %d\n", a_int, b_int, int_result);
    
    int_result = divide_int(a_int, b_int);
    printf("Integer Division: %d , %d = %d\n", a_int, b_int, int_result);
    
    // Test basic math operations with floats
    float_result = add_float(a_float, b_float);
    printf("Float Addition: %.2f , %.2f = %.2f\n", a_float, b_float, float_result);
    
    float_result = subtract_float(a_float, b_float);
    printf("Float Subtraction: %.2f , %.2f = %.2f\n", a_float, b_float, float_result);
    
    float_result = multiply_float(a_float, b_float);
    printf("Float Multiplication: %.2f , %.2f = %.2f\n", a_float, b_float, float_result);
    
    float_result = divide_float(a_float, b_float);
    printf("Float Division: %.2f , %.2f = %.2f\n", a_float, b_float, float_result);
    
    // Test basic math operations with bytes
    byte_result = add_byte(a_byte, b_byte);
    printf("Byte Addition: 0x%X , 0x%X = 0x%X\n", a_byte, b_byte, byte_result);
    
    byte_result = subtract_byte(a_byte, b_byte);
    printf("Byte Subtraction: 0x%X , 0x%X = 0x%X\n", a_byte, b_byte, byte_result);
    
    byte_result = multiply_byte(a_byte, b_byte);
    printf("Byte Multiplication: 0x%X , 0x%X = 0x%X\n", a_byte, b_byte, byte_result);
    
    byte_result = divide_byte(a_byte, b_byte);
    printf("Byte Division: 0x%X , 0x%X = 0x%X\n", a_byte, b_byte, byte_result);

    */

    /* Part 2
     - Modify myfunctions.h and myfunctions.c to hold the prototypes and functionality
       respectivley for the below section
     - Each function below must be implemented, the name of the function is written in clean
       code, and therefore easy to understands the functions purpose.
     - You can test the code by compiling the code, and running it
     - You must add, commit and push your code incrementally
    */

    /*
    // Test bitwise operations    
    result = bitwise_and(a_int, b_int);
    printf("Bitwise AND: %d , %d = %d\n", a_int, b_int, result);
    
    result = bitwise_or(a_int, b_int);
    printf("Bitwise OR: %d , %d = %d\n", a_int, b_int, result);
    
    result = bitwise_xor(a_int, b_int);
    printf("Bitwise XOR: %d , %d = %d\n", a_int, b_int, result);
    
    result = bitwise_not(a_int);
    printf("Bitwise NOT: %d = %d\n", a_int, result);
    */

    /* Part 3
     - Modify myfunctions.h and myfunctions.c to hold the prototypes and functionality
       respectivley for the below section
     - Each function below must be implemented, the name of the function is written in clean
       code, and therefore easy to understands the functions purpose.
     - You can test the code by compiling the code, and running it
     - You must add, commit and push your code incrementally
    */
    
    /*
    // Test memory management
    int size = 10;
    int *array = allocate_array(size);
    initialize_array(array, size);
    print_array(array, size);

    if (check_memory(array, size)) {
        printf("Memory check passed: Address of last element is as expected.\n");
    } else {
        printf("Memory check failed: Address of last element is not as expected.\n");
    }

    deallocate_array(array);

    // Try to access memory after deallocation (should result in an error or NULL pointer)
    if (array == NULL) {
        printf("Memory successfully deallocated and pointer is NULL.\n");
    } else {
        printf("Memory deallocation failed or pointer not set to NULL.\n");
    }
    */

    /* Part 4
    - Modify myfunctions.h and myfunctions.c to hold the prototypes and functionality
      respectivley for the below section.
    - Each function below must be implemented, the name of the function is written in clean
    code, and therefore easy to understands the functions purpose.
    - You can test the code by compiling the code, and running it
    - You must add, commit and push your code incrementally

    - You will design a struct named `Student` that will represent basic information about a student. The `Student` struct should contain:
        - `char name[50];`  // The name of the student
        - `int id;`  // The student's ID number
        - `float grade;`  // The student's GPA
    */
    
    /*
    struct Student student1 = create_student("John Doe", 12345, 3.7);
    
    print_student(student1);
    free_student(&student1);

    struct Student students[100];
    int student_count = 0;
    
    add_student(students, &student_count, create_student("John Doe", 12345, 3.7));
    add_student(students, &student_count, create_student("Jane Smith", 67890, 3.9));
    print_all_students(students, student_count);
    */

    return 0;
}