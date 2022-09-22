# Chapter 4: Functions part 2
# CSE 2010 - Week 5


## What this lecture covers
- Review of functions
- Procedures
- Pass by Value vs. Pass by Reference
- Function overloading


## Review: Functions
- Functions are groups of statements that perform a specific task.
- Functions can have multiple parameters (inputs), but only up to one return value (output)
- Create functions when you will need to perform a specific task over and over again.
- Function Definition Syntax:
```c++
return__type function_name (parameter1, parameter2,...,parameter n)
{
	//statements to complete a task
	//functions have access to their parameters and new variables declared
	return return_value;
}
```
- return__type : The data type of the value the function will return. Can be any data type (int, bool, string, char, double)
	- If your function will not return any value, use “void”
- function_name : name that you choose to describe what the function does. Make sure it makes sense.
- parameters : placeholders for the inputs that the function needs to perform its tasks. The parameters get their values from the respective arguments that are used to call the function (order of the arguments = order of the parameters).
- return_value : At some point in your function, you should have at least one return statement that returns the value that the function was tasked to determine. The datatype of the return_value needs to match the data type of the return__type. As soon as the function reaches a return statement, the function stops and control of the program is returned to the calling function.
	- If the function return type is void, don’t have a return statement


## Function Arguments
###### What is an argument and how is it different from a parameter?
- Arguments are the values provided when calling a function.
- Arguments provide the values for the function’s parameters.
- The number of arguments should match the number of parameters.
- The first argument goes to the first parameter , the second argument goes to the second parameter , and so on.

```c++
//Example of syntax for calling a function you define
#include <iostream>
using namespace std;
int main()
{
	//#1 store function return value into a new variable
	return_type variableName = function_name;
	
	//#2 output the value in a cout statement
	cout << "this is what the function returns: " << function_name(arguments);
	
	//#3 use the value in an arithmetic expression
	int var1 = 4 + function_name(arguments);
	
	//#4 use the value as the argument for another function call
	double var2 = function_name1(argument1, function_name2(arguments));
	
	return 0;
}
```

###### Example

Defining and calling a function called sum_three() which returns the sum of 3

integers. (sum_three.cpp on Canvas)

Output:


Example: Polygons

Trigonometry tells us that we can find the perimeter and area of a regular polygon

with four or more sides given the number of sides, and the length of each side.

Let’s see a program that can help us with this (polygon.cpp on Canvas)


**Let’s write a program together**

Write a program that repeatedly prompts the user to enter a positive value. For each value that the user enters, the program
will print whether it is an even or odd number by calling a function called is_even().

bool is_even(int num);
● Accepts an integer value and returns true if the value is even, returns false otherwise.

If the user enters 0 or a negative value, the program will display an error message and prompt the user for a new value.

The program will stop prompting the user for values once the user enters “Q”. After the user decides to quit, print the
number of times the user entered an even value, and the number of times the user entered an odd value.

(I’ll post the solution on Canvas as is_even.cpp)


**Time for an in-class group exercise! (15 min)**

**Break into groups (make some friends)**


Procedures

```
● It is possible to have functions that do not return anything.
● Perhaps you want to implement a function that performs a specific task, but does not need to
return any value to the calling function.
● You can do this by using “void” as the return type.
● Examples of when to use this:
○ If you want a function to just print output
○ If you pass values by reference and make the necessary modifications to the values in the function so it isn’t
necessary to return anything.
```
```
void function_name(parameter1, parameter2,...,parameter n)
{
```
```
//statements to complete a task
//no return statement
}
```

printSum()

Example of a procedure that prints the
sum of two numbers.

```
● The return type of the
procedure is “void”.
● There is no return statement in
the body of the function.
● We must have standalone
function calls with procedures.
● (printSum.cpp on Canvas)
```

Exchange of Data Between Functions

Pass by Value

```
● The values of arguments are sent to the calling function and copies of these values are created to
initialize the parameters in the called function.
● As long as they are not constant parameters, the value of parameters passed by value can be
changed throughout the life of the function and changes to the parameter values WILL NOT affect the
arguments from the calling function.
● Arguments passed by value can be either variables or constant values.
● Example of a function that accepts parameters passed by value
○ void fun(int y)
```

Exchange of Data Between Functions

Pass by Reference

```
● Instead of sending a value to a called function, we can also send a REFERENCE to an already existing value.
● This means that if parameters are passed by reference, the parameters will REFER to an already existing space in
memory, where the arguments are stored.
● As long as they are not constant parameters, the values of parameters passed by reference can change
throughout the life of the function and changes to the parameter values WILL affect the arguments from the
calling function.
● Arguments passed by reference CANNOT be constant values (because the program needs a memory address to
refer to).
● Example of a function that accepts a parameter passed by reference
○ void fun( int& y )
```

**Let’s see some examples of using pass by**

**reference....**

**(check_this.cpp and swap.cpp on Canvas)**


Function Overloading

```
● Is it possible to have multiple functions with the same name?
● Yup! This is referred to as function overloading
● Some conditions:
○ The parameter lists need to be different
■ Different type
■ Different number of parameters
■ Or different order
● The name of the function and the parameter lists make up the signature of a
function.
● As long as the signature of the functions are different, the compiler will be able
to tell which function to use.
```

Function Overloading

Example

multi_max.cpp on Canvas


Lecture Review

● We learned how to define our own functions.

```
● return__type function_name(parameter1, parameter2,...,parameter n)
{
//statements to complete a task
return return_value;//unless void return type
}
```
● When we call our functions, we have to supply the correct type/amount of

arguments.

● Procedures are functions with a void return type.

● Pass by value and pass by reference exchange memory differently.

● Function overloading allows us to have many functions with the same name.


