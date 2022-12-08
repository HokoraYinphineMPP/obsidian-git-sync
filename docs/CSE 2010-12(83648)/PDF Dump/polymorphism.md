# Chapter 8: Polymorphism

#### CSE 2010 - Week 12


### What is Polymorphism?

**Polymorphism:** A mechanism in object-oriented programming that gives us the
ability to handle objects of different types at the same time. In C++ we do this by
implementing several versions of a function, each in separate classes.

```
○ Literal definition of polymorphism: having many forms.
○ This is different from function overloading or overriding, which depends on the parameters.
```

## Polymorphism is sometimes easier to learn

## by first looking at an example....


**Clocks Example Program: A program that uses local clocks (base class) and travel clocks
(derived class).**
Base Class: Clock


**Derived Class: TravelClock**


Test Program for Clock and TravelClock Classes

```
Output:
```
```
Notice that there is a lot of repetitive code when it
comes to displaying clock information.
Let’s make our code look nicer by sticking all of our
objects into a vector and using a loop to call the
functions repeatedly.
```

### Storing derived objects with base objects

```
● The compiler will not give us any errors when we try to store a TravelClock into a Clock vector,
but we encounter problems with how the vector is allocating memory.
○ For each object, the vector only allocates space for one attribute, “military”.
○ For the TravelClock objects with additional attributes, the vector will “slice away” the
additional TravelClock attributes (“location”, “time_difference”)
```

### Storing derived objects with base objects

● Using a vector of pointers, we can simply store the memory addresses of the objects stored in heap memory.


##### First example of polymorphism: a vector that stores different “forms” of a clock

```
● The pointers will all have the same size (size of a memory address), even though the objects they are pointing
to will vary in size.
● We can assign a pointer of type Clock* to point to TravelClock*, but we can’t have a TravelClock* point to a
Clock*
```
```
(The time_difference above should be 2 and 17 for Zacatecas and Tokyo, respectively.)
```

### What happens if we run this?

```
● Unfortunately, when we run the program we will get
some unexpected output.
● The get_location() and get_hours() functions for
the TravelClock objects were not called.
● Since the compiler sees the objects as pointers of
type Clock*, it makes a note to use Clock member
functions for those function calls (so it does what it
thinks it’s supposed to do).
● Notice that the value of the “is_military” data
member is set properly, but nothing else.
● What we want is for our program to be able to first
check the object type before calling the function,
and this needs to be done during run-time....how
do we do this?
```
```
Output:
```

### virtual Functions

```
● Virtual functions are base class member functions whose behavior can be
overridden in derived classes.
● Virtual functions allow for overriding behavior even if there is no compile-time
information about the type of object invoking a function (such as with pointers
that point to objects in heap memory).
● Using the virtual keyword in the base class will automatically make all
functions in the derived class with the same name and parameters types virtual
functions as well.
● Whenever a virtual function is called, the exact function that is going to be
called will be determined at run-time.
○ This is referred to as Dynamic Binding, whereas Static Binding occurs for function calls
determined at compilation time.
```

Base class with virtual **destructor** and
**member functions** Derived class with virtual member functions (not noted but will inherit from base class)

```
● When the compiler encounters a call to “get_location” or “get_hours”, it’s going to skip the binding and it will allow the object
type to be determined during run-time.
● Similarly when an object is deleted, it will check what type of object is being deleted to call the correct destructor.
```

```
Output:
```
After properly implementing polymorphism...we are all good now!


### Inheritance and Polymorphism Review

```
● As we have seen in this example program, we can represent polymorphic
collections of different object types.
```
```
● Inheritance is used to express the commonality between objects.
```
```
● Polymorphism , such as what is implemented with virtual functions and vectors
of pointers, gives our programs a great deal of flexibility and extensibility.
```
```
● We can easily extend the number of derived classes of a base class and make
sure that the appropriate functions are called each time.
```

