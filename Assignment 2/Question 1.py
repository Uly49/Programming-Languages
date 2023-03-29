# Ulysses Palomar
# CSCI 333 Programming languages
# Assignment 1 Question 1
# This code will create an acronym from any given phrase


print("This program builds acronyms")

# Take user input
phrase = input("Enter any phrase: ")

# Split the entered phrase into each word
phrase_words = phrase.split()

acronym = " "

# iterate through each word, take the first letter of that word, make it capitalized, and enter it into acronym
for word in phrase_words:
    acronym += word[0].upper()

print("The acronym is:", acronym)
