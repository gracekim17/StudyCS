
# LIST BASICS
#
# friends = ["Kevin", "Karen", "Jim", "Oscar", "Pam", "Michael"]
# friends[1] = "Dwight"
#
# print(friends[-3])          # will print "Kevin" because it's THREE spaces from the back
# print(friends[1:])          # will return "Karen" and "Jim" because it prints everything after index 1
# print(friends[1:3])         # will return index 1 and 2, but NOT 3! it returns everything UP UNTIL index 3

# LIST FUNCTIONS

lucky_numbers = [4, 8, 42, 65, -12, 15, 16, 23, "hello"]
friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby", "Grace", "Jim", "Jim"]

# friends.extend(lucky_numbers)           # will add a list to another list
# friends.append("Creed")                 # will add an item to the END of the list
# friends.insert(1, "Dwight")             # will add item to the specified index
# friends.remove("Jim")                   # will remove specified item from the list
# friends.clear()                         # get rid of every element inside the list
# friends.pop()                           # will pop an item off the END of the list
# index_of_jim = friends.index("Jim")     # will return index of specified element (error if it isn't there)
# friends.sort()                          # will order the list in alphabetical/numerical order! :o
# lucky_numbers.reverse()                 # will reverse order of list (literally flip/flopping basically)
# num_of_jim = friends.count("Jim")       # returns # of times specified elmt occurs in list
friends2 = friends.copy()               # returns copy of list that calls the copy() function

print(friends)
print(friends2)
print(lucky_numbers)
