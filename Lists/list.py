"""
What is a List?
A list is an ordered collection of items which can be of any data type. 
Lists are mutable, meaning that their contents can be changed after they are created. 
In Python, lists are defined by enclosing elements in square brackets [] and separating them with commas.
"""

# Creating a list of numbers
numbers = [5, 10, 15, 20]

print(numbers[0])

"""
How is a list stored in memory?
Python list stores refrences to objects in a contiguous dynamic array. 
The list object itself contains a pointer to the array, the size of the array, and the number of elements in the list. 
When you add or remove elements from a list, Python may need to resize the underlying array, 
which can involve allocating a new array and copying the elements over.

Address = Base Address + (Index * Size of each element)
"""

# updating list
numbers[3] = 200

print(numbers)

# append elements
numbers.append(400)
print(numbers)

# insert elements
numbers.insert(4, 1000)
print(numbers)

# remove elements - time complexity is O(n)
numbers.remove(200)
print(numbers)

# pop elements - time complexity is O(1)
numbers.pop()
# time complexity is O(n)
numbers.pop(0)
print(numbers)

