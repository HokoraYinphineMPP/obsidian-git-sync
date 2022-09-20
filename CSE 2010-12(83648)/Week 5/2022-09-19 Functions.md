# Chapter 4: Functions

## CSE 2010 - Week 5


## What this lecture covers

##### ● Function Declaration and Definition

##### ● Calling functions


## Background

##### ● Up until now, we’ve only defined one function for our programs: main().

##### ● We have used pre-defined functions that come from C++ libraries

###### ○ pow(x,n);

###### ○ sqrt(x);

###### ○ cin.fail();

###### ○ There are all functions we can use, but we don’t see the code for them, we simply provide the

###### necessary arguments, and they return an expected value to us.

##### ● Now, we will learn how to define our own functions and use these functions

##### inside of main or within other functions.


## Functions

##### ● Functions are groups of statements that, when run together, perform a specific

##### task.

##### ● In addition to the int main() function, we can have additional functions in our

##### programs. Logically, each function should perform a specific task and nothing

##### more.

##### ● Function characteristics:

###### ○ A function will always return AT MOST 1 value.

###### ■ This means it can return no value, or 1 value.

###### ○ Unlike its return value, functions can have MULTIPLE parameters, or inputs. Parameters are the

###### values provided to the function in order for it to do its job.

##### ● When you are defining a function, make sure it is clear what its job/task will be.


## Defining Functions

● Before we can use functions....we need to make them (duh)

● Function Definition Syntax:

```
return__type function_name(parameter1, parameter2,...,parameter n)
{
```
```
//statements to complete a task
//functions have access to their parameters and new variables declared
return return_value;
}
```
● return__type : The data type of the value the function will return. Can be any data type (int, bool, string, char, double)
○ If your function will not return any value, use “void”

● function_name : name that you choose to describe what the function does. Make sure it makes sense.

```
● parameters : placeholders for the inputs that the function needs to perform its tasks. The parameters get their values from the respective arguments
that are used to call the function (order of the arguments = order of the parameters).
```
```
● return_value : At some point in your function, you should have at least one return statement that returns the value that the function was tasked to
determine. The datatype of the return_value needs to match the data type of the return__type. As soon as the function reaches a return statement,
the function stops and control of the program is returned to the calling function.
○ If the function return type is void, don’t have a return statement
```

#### Function that sums

#### 3 values

```
return_value_type function_name(parameters)
{
```
```
//statements
return return_value;
}
```
```
Example:
```
```
int sum_three(int num1, int num2, int num3)
{
```
```
//code to sum the numbers
int sum = num1 + num2 + num3;
return sum;
}
```
```
OR
```
```
int sum_three(int num1, int num2, int num3)
{
return (num1+num2+num3);
}
```

## Ok we made a function, but how do we actually use it?

##### ● Once you’ve defined a function, you can use it by calling it like you would any

##### other function.

##### ● Call the function when you reach the point in your code when you need it to

##### perform its specific task.

##### ● Remember that a function will return a value, so you need to handle that value

##### somehow.

###### ○ Store it into a new variable.

###### ○ Use it in an arithmetic expression.

###### ○ Have it as part of a cout statement.

###### ○ Use its return value as part of another function call.


### Function Arguments

What is an argument and how is it

different from a parameter?

```
● Arguments are the values
provided when calling a
function.
● Arguments provide the values
for the function’s parameters.
● The number of arguments
should match the number of
parameters.
● The first argument goes to the
first parameter , the second
argument goes to the second
parameter , and so on.
```

### Example

Defining and calling sum_three()


#### Forward Declarations

```
● Forward declarations are a way
of DECLARING a function
BEFORE main and then
DEFINING the function AFTER
main.
● This is done by placing the
prototype of the function(s)
before main. And then after
main, define them.
● This can be a good option if you
have several functions and you
don’t want to clutter the space
before main.
```

**Let’s write a program together**

Write a program that repeatedly prompts the user to enter a positive value. For each value that the user enters, the program

will print whether it is an even or odd number by calling a function called is_even().

bool is_even(int num);

● Accepts an integer value and returns true if the value is even, returns false otherwise.

If the user enters 0 or a negative value, the program will display an error message and prompt the user for a new value.

The program will stop prompting the user for values once the user enters “Q”. After the user decides to quit, print the

number of times the user entered an even value, and the number of times the user entered an odd value.


