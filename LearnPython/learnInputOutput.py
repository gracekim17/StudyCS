
"""
Learning how to retrieve user input
Note: this is one way to have multiple lines of comments
The other method is to press Control, '/" and then IDE will comment out all lines
"""

# # taking the user input and storing it in the variable user_name
user_name = input("Enter your name: ")
user_age = int(input("Enter your age: "))

# accessing user input variables and using it to produce output
print("Hello " + user_name + "! You are " + str(user_age) + " years old.")
user_age += 3
print("You will be " + str(user_age) + " in 3 years.")

# # LEARNING OUTPUT:
# #
# # Printing:
#
# num = 10;
# test = True;
# word = "test"
#
# # takeaway: when printing non-string type data, console will print a space before and after the data,
# # UNLESS the variable is the first parameter of the print function, in which case the space only goes after the data
# # to print variables as strings, use function str() and concatenate variables as you would w/ strings (aka no spaces!)
#
# print(".", num, test, word, ".")                # output: ". 10 True test ."
# print(num, test, word, ".")                     # output: "10 True test ."
# print(word, test, num, ".")                     # output: "test True 10 ."
# print(str(num) + str(test) + word)              # output: "10Truetest"
# print("." + str(num) + str(test) + word)        # output: ".10Truetest"
