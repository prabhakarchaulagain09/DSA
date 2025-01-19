#1. Simple Arithmetic: Write a Python program to take two numbers as input and output their sum, difference, product, and quotient.

def simple_arithmetic():

    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))


    sum_result = num1 + num2
    difference_result = num1 - num2
    product_result = num1 * num2
    if num2 != 0:
        quotient_result = num1 / num2
    else:
        quotient_result = "undefined (division by zero)"


    print(f"Sum: {sum_result}")
    print(f"Difference: {difference_result}")
    print(f"Product: {product_result}")
    print(f"Quotient: {quotient_result}")

if __name__ == "__main__":
    simple_arithmetic()

#2. Even or Odd: Ask the user for a number and print whether it is even or odd.

def even_or_odd():

    num = int(input("Enter a number: "))


    if num % 2 == 0:
        print(f"{num} is even.")
    else:
        print(f"{num} is odd.")

if __name__ == "__main__":
    even_or_odd()

#3. Factorial Function: Create a function to compute the factorial of a number.

def factorial(num):
    
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)
    
if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print(f"The factorial of {num} is {factorial(num)}.")


#4. List Operations: Write a program to create a list, append an item, remove an item, and sort it.

def list_operations():
    
    my_list = []

    while True:
        print("1. Add item")
        print("2. Remove item")
        print("3. Sort list")
        print("4. Display list")
        print("5. Exit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            item = input("Enter an item: ")
            my_list.append(item)
        elif choice == 2:
            item = input("Enter an item to remove: ")
            my_list.remove(item)
        elif choice == 3:
            my_list.sort()
        elif choice == 4:
            print(my_list)
        elif choice == 5:
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    list_operations()

#5. Dictionary Lookup: Create a dictionary of students and their grades. Allow the user to input a student name and display their grade.

def dictionary_lookup():

    students = {
        "Alice": 90,
        "Bob": 85,
        "Charlie": 88,
        "David": 92,
        "Eve": 87
    }

    name = input("Enter a student name: ")

    if name in students:
        print(f"{name}'s grade is {students[name]}.")
    else:
        print("Student not found.")

if __name__ == "__main__":
    dictionary_lookup()


