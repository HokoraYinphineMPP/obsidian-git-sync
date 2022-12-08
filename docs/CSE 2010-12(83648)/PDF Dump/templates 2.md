### Reminders/Due Dates

● Summer 2023 Internship Opportunity posted on Canvas.

● Lab 6 makeup due tonight.

● Lab 9 due Wednesday 11/30.

● Lab 10 and Homework 4 will be due next Monday December 5 by 11:59pm.

```
● Makeup submissions for Homework 3, Lab 7, and Lab 8 will open on
Wednesday and will be due Friday December 9.
```
● Wednesday 11/30 we will have a final exam review.

```
● Our final is next Wednesday December 7, 2022 from 5:30pm-7:30pm. We will be
meeting in JB-358.
```

## Please take 10 minutes to complete the SOTE for this course.

```
● Responses are completely anonymous and are not released until AFTER
grades are posted.
● Feedback really helps us know what is working or what needs
improvement in the course.
● You can access on Canvas > Any Course, SOTE (in bottom left menu).
```
```
QR Code:
● Landing Page URL:
https://my.csusb.edu/default/classclimate_survey/index
```

# Chapter 16:

# Templates part 2

```
CSE 2010
Week 15
```

# Templates Review

Templates in C++:
A tool that allows a single function or class to work with a variety of data types.

```
● A template allows a function or a class definition to be parameterized by type, instead of values.
● For this chapter we will learn about template functions & template classes.
```
Syntax of a template function :

```
template<typename type_var 1 , ..., typename type_varn >
```
```
return_type function_name(parameters)
```
```
{
//statements
}
```
```
● typename type_var 1 , ..., typename type_varn is used to list the number of
generic types your function will need. Use a different letter for each different type.
● The return type can be a generic type or regular data type.
```

Example: Finding the smaller of two values (without/with templates)

Output:

```
Output:
```

# Class Templates

```
We have learned in previous chapters that a class is a combination of data members and member functions.
```
```
Now consider that we need a class with the same data members and overall functionality, but with different
data types.
```
We can accomplish this with a class template! (^) Syntax for function definitions:
template \<typename T>
className\<T>::className(T init):data(init)
{
}
template \<typename T>
T className \<T>::get()const
{
return data;
}
template \<typename T>
void className \<T>::set(T d)
data = d;
}
Syntax:
template \<typename T>//you can have multiple generic types
class className
{
private:
T data;
public:
className(T init); //overload constructor
T get() const;//accessor
void set(T d);//mutator
};


# Compilation of Class Templates

```
● Templates are not like ordinary classes in the sense that the compiler
doesn’t generate object code for a template or any of its members until
the template is instantiated with concrete types.
● Acceptable methods of compiling class templates vary depending on the
C++ compiler you use, but the following method should work across all
versions.
● The inclusion method
○ Define your template class in a .h file
○ Define your template class functions in a .cpp file
○ Include the .cpp file in whatever program file you are using the class in.
○ When you go to compile, you only need to compile the program file, not the class
template.
```

##### Pair Class

```
Program that uses the Pair class template
```
```
Compilation and output
```

# Data Structures

```
● Data structures in programming are methods in which to store data in
efficient and easy to access ways.
● Depending on how you need to store and access data, you have different
data structures to choose from.
● A popular data structure that we have been using are vectors, which is
part of the C++ Standard Template Library (STL).
● The C++ STL is a powerful set of template classes to provide
general-purpose classes and functions with templates that implement
commonly used data structures and algorithms.
● Let’s try out a simple approach at implementing one of these data
structures.
```

# Stacks (Data Structure)

Stacks: A data structure in which the last

item pushed into the stack is the first item

that will be popped from the stack.

● Last in, first out (LIFO)

```
Typical operations for stacks:
● Push (add an item to top)
● Pop (delete item from top)
● Peek/Top (See item at top without
deleting)
```

##### Class Template for a

##### Stack (Stack.h)

```
● We will only need one generic
type here, since a data
structure should only hold
one type.
● But by using templates it can
hold any type!
● To simulate a stack, we use an
array of type T, but as far as
accessing/manipulating it, we
limit the member functions to
pop(), push(), and top().
● empty() and size() are just
extra accessor functions.
```
Let’s implement the member
functions!


###### Class Template for a stack - Member Functions (Stack.cpp)


## Stack_main.cpp

```
Output:
```

##### Class Templates for an

##### Array (Array.h)

```
● Create a template class Array
that can handle an array of
objects of any type and any
size in the heap.
● Define an add member
function to add elements to
the end of the array.
● Define a print function to print
all elements in the array.
```

# Array.cpp

```
Let’s write a program that
uses this class!
```

# Templates Review

```
● Templates in C++: A tool that allows a single function or class to work with
a variety of data types.
○ This saves us from having to overload our functions with different datatypes.
● A template allows a function or a class definition to be parameterized by
type, instead of values.
● We can overload template functions.
● Class templates allow us to design generic classes that accept different
data types and objects.
```

#### And with that...we have covered everything you need to know for CSE 2010!

```
Let’s look at the Student Learning Outcomes
we looked at in Week 1 in the syllabus
```

