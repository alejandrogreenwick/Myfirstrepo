# myfunctions.py


def sum(a, b):
    """Return the sum of two numbers."""
    return a + b


def difference(a, b):
    """Return the difference a - b."""
    return a - b


def even_or_odd(number):
    """Return 'Even' or 'Odd' depending on the number."""
    if number % 2 == 0:
        return "Even"
    else:
        return "Odd"


def max_of_three(a, b, c):
    """Return the largest of three numbers."""
    max_value = a
    if b > max_value:
        max_value = b
    if c > max_value:
        max_value = c
    return max_value

def sum_of_array(arr):
    """Return the sum of all elements in a list."""
    total = 0
    for value in arr:
        total += value
    return total


def max_in_array(arr):
    """Return the maximum value in a list. For empty list, return None."""
    if len(arr) == 0:
        return None

    max_value = arr[0]
    for value in arr[1:]:
        if value > max_value:
            max_value = value
    return max_value


def use_dictionary():
    """
    Create a simple dictionary and return the sum of its values.
    This matches the 'Dictionary sum' print in main.py.
    """
    data = {"a": 1, "b": 2, "c": 3}
    total = 0
    for value in data.values():
        total += value
    return total

def bitwise_and(a, b):
    return a & b


def bitwise_or(a, b):
    return a | b


def bitwise_xor(a, b):
    return a ^ b


def bitwise_not(a):
    return ~a

def allocate_array(size):
    """Create a list of given size filled with zeros."""
    return [0] * size


def initialize_array(array, size):
    """Fill the list with simple values 0, 1, 2, ..."""
    for i in range(size):
        array[i] = i


def print_array(array, size):
    """Print the list elements on one line."""
    for i in range(size):
        print(array[i], end=" ")
    print()


def check_memory(array, size):
    """
    In Python we don't manage memory like C,
    so we just check that the list length matches the size.
    """
    return len(array) == size


def deallocate_array(array):
    """
    Simulate deallocation by clearing the list.
    The 'array' name in main.py will still exist,
    but the list contents will be gone.
    """
    array.clear()

class Student:
    def _init_(self, name, student_id, grade):
        self.name = name
        self.id = student_id
        self.grade = grade

    def print_student(self):
        print(f"Name: {self.name}, ID: {self.id}, Grade: {self.grade}")


def add_student(student_list, student):
    """Add a Student object to the list."""
    student_list.append(student)


def print_all_students(student_list):
    """Print information for each Student in the list."""
    for student in student_list:
        student.print_student()

        