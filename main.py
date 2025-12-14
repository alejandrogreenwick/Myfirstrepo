from myfunctions import (
    sum,
    difference,
    even_or_odd,
    max_of_three,
    sum_of_array,
    max_in_array,
    use_dictionary,
)

arr = [1, 2, 3, 4, 5]

print("Sum:", sum(10, 5))
print("Difference:", difference(10, 5))
print("Even or Odd:", even_or_odd(10))
print("Max of three:", max_of_three(10, 5, 8))
print("Sum of array:", sum_of_array(arr))
print("Max in array:", max_in_array(arr))
print("Dictionary sum:", use_dictionary())



"""
Only uncomment the sections you are told too. No further modifications to this file should be made.
Do not change function names, arguments, or variables belows, again just uncomment where instructed to do so.
"""

if __name__ == "__main__":

    """ Part 5: Basic Operations
    - Create myfunctions.py to hold the functionality of each function
      the below section
    - Each function below must be implemented, the name of the function is written in clean
    code, and therefore easy to understands the functions purpose.
    - You can test the code by running it
    - You must add, commit and push your code incrementally
    """

    """
    arr = [1, 2, 3, 4, 5]
    print("Sum:", sum(10, 5))
    print("Difference:", difference(10, 5))
    print("Even or Odd:", even_or_odd(10))
    print("Max of three:", max_of_three(10, 5, 8))
    print("Sum of array:", sum_of_array(arr))
    print("Max in array:", max_in_array(arr))
    print("Dictionary sum:", use_dictionary())
    """

    """
    Part 6: Bitwise Operations
    - Modify myfunctions.py functionality respectivley for the below section
    - Each function below must be implemented, the name of the function is written in clean
      code, and therefore easy to understands the functions purpose.
    - You can test the code by running it
    - You must add, commit and push your code incrementally
    """

    """
    a_int = 10
    b_int = 5
    
    print("Bitwise AND:", a_int & b_int)
    print("Bitwise OR:", a_int | b_int)
    print("Bitwise XOR:", a_int ^ b_int)
    print("Bitwise NOT:", ~a_int)
    """

    """
    Part 7: Memory Management Simulation (Lists in Python)
    - Modify myfunctions.py functionality respectivley for the below section
    - Each function below must be implemented, the name of the function is written in clean
      code, and therefore easy to understands the functions purpose.
    - You can test the code by running it
    - You must add, commit and push your code incrementally
    """

    """
    size = 10
    array = allocate_array(size)
    initialize_array(array, size)
    print_array(array, size)

    if check_memory(array, size):
        print("Memory check passed: Address of last element is as expected.")
    else:
        print("Memory check failed: Address of last element is not as expected.")

    deallocate_array(array)
    try:
        print(array)
    except NameError:
        print("Memory successfully deallocated.")
    """

    """ Part 8: Student Struct Equivalent in Python
    - Modify myfunctions.py  functionality respectivley for the below section.
    - Each function below must be implemented, the name of the function is written in clean
    code, and therefore easy to understands the functions purpose.
    - You can test the code by running it
    - You must add, commit and push your code incrementally
    """

    """
    student1 = Student("John Doe", 12345, 3.7)
    student1.print_student()
    del student1

    students = []
    add_student(students, Student("John Doe", 12345, 3.7))
    add_student(students, Student("Jane Smith", 67890, 3.9))
    print_all_students(students)
    
    students.clear()
    print("Students list after deletion:", students)
    """