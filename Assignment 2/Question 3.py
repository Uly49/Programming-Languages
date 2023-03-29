# Ulysses Palomar
# CSCI 333 Programming languages
# Assignment 1 Question 3
# This program will take a value from the user and print the Syracuse sequence of that numbeer

print("This program outputs a Syracuse sequence.")

# Ask user for starting number
x = int(input("Enter the initial value (an int >= 1): "))

print(x, end=" "),

while x != 1:
    # If number is even, divide by 2
    if x % 2 == 0:
        x = x / 2

    # If number is odd, multiply by 3 and add 1
    else:
        x = (x * 3) + 1
    print(x, end=" ")


