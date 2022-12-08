# Chapter 7 - Pointers

#### CSE 2010

#### Week 10


## Background

```
● As we briefly discussed at the
beginning of this course, computer
memory is made up of sequences of
bytes (1 byte = 8 bits, and 1 bit is either
0 or 1)
○ Different data types require different # of
bytes
○ Each byte of memory has a physical
memory address represented in
hexadecimal
■ The #’s we are used to are in decimal
form, base 10
■ Binary = base 2
■ Hexadecimal = base 16
```

## Background

● When we have a variable or objects, their names are labels for specific

```
locations in memory containing a value we can reuse.
○ This is helpful because without names we would need to refer to the physical memory
address (imagine having to memorize hexadecimal numbers!)
```
```
● To get the address of a variable, we can use the address operator (&)
○ We’ve used this operator before when we pass by reference.
○ Recall that parameters passed by reference refer to an already existing value in memory.
```
● We are now going to learn that it is beneficial to obtain the address of a

variable or object in order to complete specific tasks.


## What are pointers?

```
● Pointers are variables whose values are memory addresses.
● These memory addresses are the addresses of other variables or objects.
```
Declaring/Initializing pointers:

1. datatype* pointerName = **&** existing variable/object;

```
a. int year = 2021;
int* pYear = &year; //pYear = memory address of year
```
```
b. double salary = 50000.00;
double* pSalary = &salary;
```
```
c. Pet pet1(“Obi”, “cat”, ‘M’, 18.0);
Pet* p = &pet1;
```
```
Note: the pointer datatype needs to match the type of the variable whose address it
stores.
```
2. datatype* pointerName = NULL;

```
a. double* pPrice = NULL;
```
```
Note: Use this method when you need to declare a pointer but don’t yet know what it
needs to point to.
```

## Let’s take a closer look at a simple example

```
int year = 2021; //declaring an int variable
int* pYear = &year; //declaring an int pointer variable
```
```
cout << “Value of year: “ << year << “\n”;
cout << “Address of year: “ << &year << “\n”;
cout << “Value of pYear: “ << pYear << “\n”;
cout << “Address of pYear: “ << &pYear << “\n”;
```
```
Output:
Value of year: 2021
Address of year: 0x28fe2A
Value of pYear: 0x28fe2A
Address of pYear: 0x28fe
```

## Dereferencing Pointers

● Creating pointers allows us to use the address stored to access the value

at that address using the dereference operator - *

● Example:

```
int year = 2021;
int* pYear = &year;
cout << “Value of pYear: “ << pYear << “\n”; //displays 0x28fe2A
cout << “Value of *pYear: “ << *pYear << “\n”; // displays 2021
```
Let’s see a programming example...


## You might be thinking.......

● Why do we use pointers and * when we can just directly access the value

with the variable name?

● Depending on the task at hand, we will need to either directly or indirectly

access a value and pointers provide a more efficient way of doing this and

sometimes it’s the only way to accomplish it.

```
○ Passing arguments by pointers to functions
○ Representing, accessing, and modifying arrays.
```
```
○ Used for iterators in STL library
○ Accessing heap memory, modifying a value inside of a function
○ Sharing of attributes between classes (We’ll learn this next chapter!)
```

## Pass by Pointer

● We’ve learned the difference between pass-by-value and

pass-by-reference, now let’s look at pass-by-pointer.

● In the pass-by-pointer methods, the calling function sends the **address of**

**the argument** to the called function, and the called function stores it in a

pointer.

● What is the difference between pass by pointer and pass by reference?

```
○ Pass-by-reference: argument and parameter share the same memory. The parameter
refers to an already existing space in memory.
```
```
○ Pass-by-pointer: parameter stores the address of the argument and uses it to change
its values as needed.
○ Both of these methods costs less than pass-by-value.
```

Key thing to remember
is to pass the ADDRESS
of a value

```
Swapping with Pointers
```

## Different ways of Passing Data to Functions


## Arrays + Pointers = BFFs

```
● We’ve already been using pointers without even realizing it..
● int arr[5];//what actually happens in memory?
○ The system creates 5 sequential memory locations of type int.
○ The system then creates a constant pointer of type int that points to the first element of the array, this
pointer by default is called arr.
```
```
● A constant pointer means that its contents (an address) cannot be changed, therefore
that pointer is always pointing at the first element in the array.
```
```
● The address of the elements at:
○ index 0 = arr+
○ index 1 = arr+
○ index 2 =arr+2 , and so on.
```
● This means that we can access array elements using the (*) operator, similarly to [ ]

```
arr[0] == *(arr + 0)
```
```
arr[1] == *(arr + 1)
```
```
arr[2] == *(arr + 2)
```

## Pointer Arithmetic

**Pointer arithmetic** allows a limited number of arithmetic operators to be applied to pointer types.

```
● Addition: +, ++, += (forward)
● Subtraction: - ,--,-= (backward)
```
When used with pointers, these operators move pointers forward and backward in memory
(increase or decrease their address values).

Example:

```
int arr[5] = {0,2,4,6,8};
//set ptr equal to the pointer created for the array
int* ptr = arr; // pointing to 0
ptr = ptr + 3; // pointing to 6
ptr--;//pointing to 4
```

##### Using pointers to step

##### through arrays


## Passing a Pointer to a Function for an Array

###### ● We can pass a pointer to a function instead of passing the array.

###### ● The following two prototypes are the same:

int sum(const int arr\[], int size); //passing an array

int sum(const int* p, int size); //passing a pointer for an array



## Iterators

```
● Iterators are special pointers specifically for STL containers (vector, list, deque, map, set, stack,
etc), that allow us to easily step through and access elements in these containers.
```
```
● Similarly to pointers, vector iterators have the ability to step through elements in the vector in a
forward and backward direction (done with ++ and – operators).
```
```
● We can access the value an iterator is pointing to with (*)
```
```
● Syntax to declare an iterator:
```
```
vector<datatype>::iterator iteratorName;
```
```
● We can initialize iterators with special vector functions:
○ vectorName.begin()
■ This function returns an iterator that points to the first element in the
vector.
○ vectorName.end()
■ This function returns an iterator that points directly after the last
element in the vector.
```

## Iterator Examples

vector \<int> vec1{2,4,7,11};

vector\<int> :: iterator i = vec1.begin(); //points to the element 2

i++; // the iterator will move to the right

cout << *i << “\n”; // will display the value of 4

//display all elements inside vec1 using an iterator

for(vector\<int>::iterator i = vec1.begin(); i != vec1.end(); i++)

{

cout << *i << “ “;

}


## Inserting Values into a Vector

```
● We can use push_back() to add values to the end of a vector, but if we want to add
values to a random location in the vector, we can use insert().
● vectorName.insert(iterator,value)
○ This function inserts the value into the position BEFORE where the iterator is pointing.
○ It also increases the size of the vector by 1.
● Inserting into an arbitrary place (order does not matter)
○ vectorName.insert(vectorName.begin() + i,value)
■ Where i is an index #. The function call will insert the value BEFORE the
element at index i, and shift all elements to the right.
● Example:
```
vector <int> vec1{33,10,11,9}; //vec1 = 33 10 11 9

vec1.insert(vec1.begin() + 2, 16); //vec1 = 33 10 16 11 9


### Inserting into an ordered vector

### to preserve the order

If you need to insert a value into a

SORTED vector and need to make sure

you preserve the order, you can use this

method:

1. Use an iterator to iterate through
    each element in a vector.
2. As are are iterating through, check
    the value of the current element.
       a. If the current element is greater than
          or equal to the value we want to insert,
          we call the insert function.
       b. If the current element is less than the
          value we want to insert, we go to the
          next element.


