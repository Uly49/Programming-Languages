# Ulysses Palomar
# CSCI 333 Programming languages
# Assignment 1 Question 2
# This program will calculate your BMI

# Take in user's weight
weight = int(input("Enter your weight (in pounds): "))

# Take in user's height
height = int(input("Enter your height (in inches): "))

# Calculate user's bmi
bmi = (weight * 720) / (height * height)

print("Your BMI is ", bmi)

if bmi < 19:
    print("That's on the low side.")

if bmi > 25:
    print("That's on the high side.")

if 19 <= bmi <= 25:
    print("That's a healthy bmi.")
