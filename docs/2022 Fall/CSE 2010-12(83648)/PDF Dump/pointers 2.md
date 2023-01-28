# Chapter 7 - Pointers 2

## CSE 2010

## Week 11


### Review - Defining Pointers

```
● Pointers are variables whose values are memory addresses.
● These memory addresses are the addresses of other variables or objects.
```
Declaring/Initializing pointers:

1. datatype* pointerName = **&** existing variable/object;
    a. int year = 2021;
       int* pYear = &year; //pYear = memory address of year
b. double salary = 50000.00;
double* pSalary = &salary;
c. Pet pet1(“Obi”, “cat”, ‘M’, 18.0);
Pet* p = &pet1;
**Note: the pointer datatype needs to match the type of the variable whose address it
stores.**
2. datatype* pointerName = NULL;
    a. double* pPrice = NULL;
       **Note: Use this method when you need to declare a pointer but don’t yet know what it**
       **needs to point to.**


### Review - Dereferencing Pointers

● We can use the dereference operator - * - to access or modify the value

stored at the memory address a pointer points to.

```
int year = 2021;
int* pYear = &year;
```
```
cout << “Value of year: “ << year << “\n”; // 2021
cout << “Value of &year: “ << &year << “\n”; // 0x28fe2A
cout << “Value of pYear: “ << pYear << “\n”; //0x28fe2A
cout << “Value of *pYear: “ << *pYear << “\n”; // 2021
cout << “Value of &pYear: “ << &pYear << “\n”; // 0x28fe
```

```
Key thing to remember
is to pass the ADDRESS
of a value
```
**Review - Pass by Pointer - Swapping Value**


###### Review-

###### Using Pointers to

###### Access Arrays


**Review - Pass by Pointer - Passing Arrays**


## Let’s learn some more about pointers!


### Let’s talk about different types of memory...

**Stack Memory**

```
● Variables, global variables, objects, arrays, and
vectors we have created are all stored in stack
memory.
● Process of Stack Memory:
○ Stack memory is empty when a program starts.
○ As variables, objects, etc are defined in main(),
values are stored onto the stack.
○ When functions are called, variables within the
scope of the function are added to the stack.
○ Once the function ends, these variables are
removed from the stack.
○ Stack memory is emptied when the final return
statement is reached at the end of main().
● Stack memory is referred to as compile-time
memory, because stack values are determined
at compilation time.
● Very fast and efficient memory management
```
```
Heap Memory
```
```
● Stack memory is allocated during compilation
time, but we can also allocate memory during
run-time.
● There are times when we need to store very
LARGE objects or collections of objects.
● Or there are times when we need to create
objects that we want available globally, not to
be deleted at the end of its scope.
● C++ environments reserve a large storage
area called a heap to store objects created
during run-time.
● Objects in heap memory do not have names
associated with them, so we use pointers to
access them.
● Pointers themselves are stored in stack
memory, but heap memory can be used to
store the object it is pointing to.
```

### Using heap memory - new and delete

```
● So how do we actually create objects in the heap during run-time?
● Objects in the heap are not automatically allocated or deleted, so it is our job to
explicitly do this.
```
```
● We use the new and delete operators.
○ new datatype - used to create memory in the heap for a single object
○ new datatype[size] - used to create memory in the heap for an array of objects
○ delete ptr- used to delete the single object using its pointer
○ delete[] ptr- used to delete allocated memory of an array in the heap.
```
```
● It is VERY IMPORTANT to make sure that for every object you create with new,
you delete that object before the program ends, or else that object will remain
in heap memory.
○ Failing to do this will result in memory leaks and may cause your computer to act all weird.
```

### Creating Arrays with the new operator

● So far, we learned that the arrays we created are “static” arrays whose

size cannot be changed because it is determined at compilation time.

● Now we will learn how we can write a program that creates a variable-size

array each time the user runs the program (dynamic arrays).

● Syntax:

```
datatype* pointerName = NULL;
//determine size of the array
pointerName = new datatype[size];
.........//program runs
delete[] pointerName;
```


### Initializing Objects with new

● Say we have an Employee class, which creates object with a name and a salary.

```
Employee* tina = new Employee(“Tester, Tina”, 50000.00);
The above creates an Employee object using the overload constructor in HEAP
memory.
```
● We can access the object with *

cout << “Employee name: “ << (*tina).get_name();

```
● As with other objects in heap memory, you will eventually have to delete the
object.
```
delete tina;


### Sharing Values Between Classes with Pointers

```
● Consider the following Employee
class.
```
```
● The Employee class represents an
Employee with a name and a salary.
```

**Sharing Values Between Classes**

**with Pointers**

● Consider the following

```
Department Class (CSE, Physics,
Math, etc)
```
● Each Department has a name,

```
and optionally a receptionist and
secretary (must have both).
```
● Receptionists and Secretaries are

of type Employee


**Sharing Values Between Classes**

**with Pointers**

● If a Department has a

receptionist and

secretary, then the

```
pointer(s) will be set to
the address of an already
```
existing Employee object.

● If a Department does not

have a receptionist and

secretary, the the

```
pointer(s) will be set to
NULL.
```

#### But couldn’t we make the Department class without pointers?

WITH pointers

class Department {
...
private:
string name;
Employee* receptionist;
Employee* secretary;
};

```
Objects that don’t have a receptionist and
secretary will not take up memory, since
those attributes will be set to NULL.
```
```
WITHOUT pointers
```
```
class Department {
...
private:
string name;
bool has_receptionist;
Employee receptionist;
bool has_secretary;
Employee secretary;
};
```
```
Objects that don’t have a receptionist and
secretary will still take up memory and you need
additional attributes.
```

### In addition to using pointers within the class to share

### values, we can use pointers to create shareable objects in

### heap memory.


### Sharing Objects - with Pointers

● Pointers enable us to properly share attributes between objects.

//declare an Employee pointer to initialize an Employee
//object in heap memory.
Employee* tina = new Employee(“Tester, Tina”, 50000.00);

//declare a Department object with no secretary/receptionist
Department qc(“Quality Control”);

//set tina as the department’s receptionist/secretary
qc.set_receptionist(tina);
qc.set_secretary(tina);

```
NULL
NULL
```

### Sharing Objects - with Pointers

● Pointers enable us to properly share attributes between objects.

//declare an Employee pointer to initialize an Employee
//object in heap memory.
Employee* tina = new Employee(“Tester, Tina”, 50000.00);

//declare a Department object with no secretary/receptionist
Department qc(“Quality Control”);

//set tina as the department’s receptionist/secretary
qc.set_receptionist(tina);
qc.set_secretary(tina);

//update tina’s salary
(*tina).set_salary(55000.00);

delete tina;//once we’re done with program


### What if we implemented this without Pointers...


##### Let’s look at a full example.... (zip folder with all files on Canvas)


### Pointers Review

```
● In this chapter we learned how to use pointers to store memory
addresses.
● Pointers can be used to indirectly access values through their addresses.
● We can use the address (&) operator to obtain addresses of variables.
● We can use the dereference operator (*) to access values stored at
specific addresses.
● Pointers are helpful with the following:
○ Passing by Pointer
○ Accessing and modifying arrays
○ Using heap memory (new/delete)
○ Allows classes to have “optional attributes”
○ Sharing objects across classes.
● Pointers are also used in class inheritance...which we will see next week!
```




![[Chapter 7 - Pointers continued-1.pdf]]