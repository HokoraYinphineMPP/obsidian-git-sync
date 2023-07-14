# Lab 7 Pointers (15 points total)

```
DUE: Wednesday November 9 by 5:30pm (before lecture)
```
Please complete the following programming exercise. Make sure to indent your code properly and add
comments. Source code with no comments will have points deducted.

**Exercise 1 (1 5 points):**

For this exercise, we will implement some functions we are already familiar with, but will instead be
using pointers.

Write a program that uses a combination of a pointer and the new operator to create an array using
heap memory (similar to newArrays.cpp example from lecture), based on the size that a user enters.

Once the user array has been created, call the following function to fill the array:

`void fillArray (int* a, int size);`

- Function that prompts the user to enter values to fill an array. The int* a parameter refers to an
    array that we will be modifying. The size parameter represents the number of elements in the
    array.t

Once the user has filled the array, call the following function:

`void print (const int* a, int size);`

- Function that prints the elements in an array. The int* a parameter is passed as a constant
    because we will not be modifying the array. The size parameter represents the number of
    elements in the array.

Finally, call the following function to determine the largest value in the array

`int max(const int* a, int size);`

- Function that returns the largest value in the array. The int* a parameter is passed as a constant
    because we will not be modifying the array. The size parameter represents the number of
    elements in the array.

**Remember to call delete at the end of your program to delete the array!**

