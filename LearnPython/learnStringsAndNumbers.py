
# Exploring Strings in Python

# printing integers in a print statement
# print("my age is: {}".format(age))
# this would then print age as a string even though it is an integer

from math import *

phrase = "Grace Kim"
print(phrase)
print(phrase.lower())               # converting string to all lowercase characters
print(phrase.upper())               # converting string to all uppercase characters
print(phrase.isupper())             # returns true if string is all uppercase
print(len(phrase))                  # returns length of string
print(phrase[0])                    # returns the character at given index
print(phrase[1:4])                  # returns the character sequence from index 1 to index 3 (not 4!!)
print(phrase[2:])                   # prints the string from index 2 to the end
print(phrase[:])                    # prints a copy of the string
print(phrase[:-1])                  # prints the string until the last index (indicated by an index of -1)
print(phrase[1:8:2])                # prints every SECOND character between indexes 1 and 7 (8-1=7), including index 1
print(phrase[::-1])                 # prints the whole string (indicated by the ":" backwards (indicated by -1 spacing)
print(phrase.index("rac"))          # returns the index of the parameter within the string
                                    # if parameter is no found, then error will be thrown
print(phrase.replace("Grace", "Jeong Hwan"))  # replaces certain components of string with other strings

if 'Kim' in phrase:                 # condition statement that checks whether certain string is within another string
    print("is Korean")
else:
    print("unsure whether she is Korean")

my_num = -18
print(str(my_num) + " is my fave")  # can print numbers as strings
print(str(abs(my_num)) + " is the abs value")
print(pow(-4, -3))
print(max(-12, -11))
print(min(-12, -11))
print(round(-1.2))
print(floor(3.99))
print(ceil(3.01))
print(sqrt(2.25))
