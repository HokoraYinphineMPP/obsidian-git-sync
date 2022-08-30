# Chapter 2: Numerical Data Types
###### Data types
what they are
the data types used to represent numbers


###### variables
what they are 
declaring and defining them
## Background
represent different types of calues depending on task. *C++* able to represent numerical and character values using specific data types.
## Definition
Values in programming have a specific data type that determins size it takes in memory and type of value that is stored.

## Numerical Data Types
### integer values
|c++ keyword|size of type|range|
|int|4 bytes|-2147483648 to 2147483647
### Floating Point values
|c++ keyword|size of type|range|
|float|4 bytes|?|
|double|8 bytes|?|

|type|size|
|int|4
|unsigned|4
|short|2
|unsigned short|2
|long long|8
|double float|8
|float|4

## Variables
### Background
### Definition


### Variable syntax
```c++
datatype variableName;
```
declares a single varibale with no initial value
ie: `int x1;` (makes variable called "x1")

```c++
datatype variableName, variableName, variableName...;
```
declares multiple variables of the same datatype, all with no initial values
seperate each variable name with a comma
ie: `int x,y,z` (makes variables called "x", "y", "z")

```c++
datatype variableName = initial value;
```
defines a signel variable with an initial calue

```c++
datatype variableName = initial value, variableName = initialcalue...;
```
defines multiple variables of the same datatpye each with its own initial value

notes:
you can declare/define as many variables as you want in a single statement, but they all must be the same data type
the "=" character used above is the assignment operator
- format is: `variable = value;` where it will assign the variable on the left the value on the right


### Rules
- variable names must start with a letter or an underscore but can contain a mix of uppercase and lower cases , numbers, and underscore

- cannot be any *C++* keyword (`int, float, double, main, class, case, etc...`)

- variable names are case sensitive
	so the variables `int pennies;` and `int Pennies;` are two different variables
	make cariable names something significant. it should be clear what it represents

### Integer Values
- keyword: `int`
- when to use `int`
	use `int` to represent data that can only be identified in whole numbers

- can perform arithmetic with integers `(+, -, *, /, %)`
	
	###### modulus operator: `%`
		op1 % op2 results in the remainder of dividing op1 by op2
			ex:
			`int x=30, y=6, z=7`
			`int v=x%y; //v=0`
			`int w=x%z; //w=2`

a op= b → a = a op b
can be used with `-=, *=, /=, %=`

`variableName = value;`
	this value can be any expression that is the same datatype as the variable

increment and decrement operators
	`++` increment by 1
	`--` decrement by 1
	- pre-increment/pre decrement (++x,--x):
	- increment/decrement x by 1 and THEN access value
	- post increment/post decrement (x++, x--) access the calue of x, and THEN increment/decrement by 

### Floating point values
*C++* keyword: `double`
when to use `double`
	use `double` when the value contain decimal points.

similar to integers, we can use arithmetic operators on these types.

note:
	cannot use % with floating point values.
	can use `fmod()`, part of the cmath library

### Constants
a constant is a named value that cannot be changed.
Use constants in your program when you are representing a fixed value

###### Syntax
`const datatype NAME = value;`



## Example Program
Write a C++ program that asks the user the number of pennies, nickles, dimes, and quarters they have, then display their total to them.

###### Steps to take
1) initialize variables
2) prompt the user for the number of each coin
3) calculate total of each coin
4) calculate total of all coins
5) display the total

###### What we need for each step
