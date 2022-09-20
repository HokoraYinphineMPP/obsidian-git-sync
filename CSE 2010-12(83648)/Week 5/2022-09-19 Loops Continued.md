# Chapter 3: Loops Continued

### CSE 2010, Week 5


## What we covered last week...

 ● Loops
- What they are
- Different parts of a loop
	- Initialization statement
	- Loop condition
	- Body of the loop
	- Update statement
- Different types of loops
	- `while` loop
	- `for` loop
	- `do-while` loop
- How to process user input with loops
- When to use one loop over another

## What this lecture will cover

 ● Another way of processing user input

 ● Nested Loops


## First let’s look at a more advanced method of processing user input with some exception/error handling


### String Conversion


● `#include <string>` gives us access
to functions that convert strings to
other data types:
https://www.cplusplus.com/reference/s
tring/
● `stod(string str)`:
- `string` to `double`
- This function returns the value
of `str` as a `double`.

```c++
/*
 * Program that takes a string as input, converts it to a double,
 * and sums until the user enters Q
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//variable declarations
	double sum = 0, num = 0;
	int count = 0;//keep track of the number of integers entered
	string input;//we will take all input as a string
	cout << "Enter numbers to sum, enter \"Q\" or \"q\" to quit.\n";
	//while loop that will run as long as the user doesn't enter Q
	while(1){
		cout << "Value #" << count + 1 << ":";
		getline(cin,input);
		//check if the input is "Q"
		if(input == "Q" || input == "q")
			break;//done with loop
		else{
			//stod will convert the string to a double
			num = stod(input);
			count++;//increase count by 1
			cout << "You entered: " << num << "\n";
			sum+=num;
			cout << "Current total sum: " << sum << "\n";
		}
	}
	//we will exit the loop once the break statement above is reached
	cout << "The final sum of the " << count << " values you entered is: " << sum << "\n";
	
	return 0;
}
```

Output:


### What happens if we enter a non-numerical value?


Output:


## Exception Handling: `try`, `catch`, and `throw`

 ● Recall that compilers catch syntax errors (errors in the “grammar” of our code).

 This is a compile-time error.

 ● When we run our code, we are susceptible to run-time errors.


- Logic errors that result in incorrect calculations or output
- Exceptions
- Run out of memory

 ● A C++ exception is a response to an “exceptional” circumstance that makes your

 program run into an error.

 ● Exceptions provide a way to transfer control from one part of a program to

 another when an error is encountered so that we can properly handle it.

 ● This is referred to as exception handling, and with C++ we can use try, catch,

 and throw


## throw

 ● using namespace std gives us access to a list of standard exceptions:


- invalid_argument
- domain_error
- out_of_range
- https://www.cplusplus.com/reference/stdexcept/

 ● Functions have the ability to throw these exceptions when an error is

 encountered.

 ● Let’s look further at stod():

 https://www.cplusplus.com/reference/string/stod/

 ● What we have to do is catch these throws.


## try & catch


● As the programmer, it is important to know when exceptions might be thrown, so when you are aware of this, you
have to place your code within a try block.
● A try block identifies a block of code that MAY cause exceptions to be thrown.
- Whenever you use functions that throw exceptions, make sure they are in try blocks.
● try blocks are followed by a catch, which will only be activated if an exception is thrown.
```c++
try{
//block of code that could throw exception
}
catch(ExceptionName){
//what to do to handle exception
//typically some sort of error output with cerr << (different from cout)
}
```



## Nested Loops

You can have a loop inside of a loop

Let’s look at an example...


## How can we use a loop to determine if a number is prime

## or not?


Definition of prime numbers:
● A number greater than 1 with only two factors: 1 and itself
● Examples : 2, 3, 5, 7, 11, 13, 17, 19


Given a number, n, how can we determined if it is prime? What characteristics does it
need to have?


