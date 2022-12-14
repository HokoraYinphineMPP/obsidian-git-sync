# Chapter 3: Loops Continued
### CSE 2010, Week 5

## What we covered last week...
 - Loops
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
 - Another way of processing user input
 - Nested Loops


## First let’s look at a more advanced method of processing user input with some exception/error handling
### String Conversion
- `#include <string>` gives us access
to functions that convert strings to
other data types:
https://www.cplusplus.com/reference/s
tring/
- `stod(string str)`:
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
```
Enter numbers to sum, enter "Q" or "q" to quit.
Value #1:6
•You entered: 6
Current total sum: 6
Value #2:7
•You entered: 7
Current total sum: 13
Value #3:10
You entered: 10
Current total sum: 23
Value #4:Q
The final sum of the 3 values you entered is: 23
```

### What happens if we enter a non-numerical value?
Output:
```
Enter numbers to sum, enter "Q" or "q" to quit.
Value #1:6
•You entered: 6
Current total sum: 6
Value #2:7
•You entered: 7
Current total sum: 13
Value #3:13
You entered: 13
Current total sum: 26
Value #4:10
You entered: 10
Current total sum: 36
Value #5:no
terminate called after throwing an instance of 'std::invalid_argument`
	what(): stod
Aborted
```


## Exception Handling: `try`, `catch`, and `throw`
 - Recall that compilers catch syntax errors (errors in the “grammar” of our code). This is a compile-time error.
 - When we run our code, we are susceptible to run-time errors.
	- Logic errors that result in incorrect calculations or output
	- Exceptions
	- Run out of memory
 - A C++ exception is a response to an “exceptional” circumstance that makes your program run into an error.
 - Exceptions provide a way to transfer control from one part of a program to another when an error is encountered so that we can properly handle it.
 - This is referred to as **exception handling**, and with C++ we can use **`try`, `catch`, and `throw`**


## `throw`
 - `using namespace std` gives us access to a list of standard exceptions:
	- invalid_argument
	- domain_error
	- out_of_range
	- https://www.cplusplus.com/reference/stdexcept/

 - Functions have the ability to **`throw`** these exceptions when an error is encountered.

 - Let’s look further at `stod()`: https://www.cplusplus.com/reference/string/stod/

 - What we have to do is **`catch`** these throws.


## `try` & `catch`
- As the programmer, it is important to know when exceptions might be thrown, so when you are aware of this, you have to place your code within a `try` block.
- A try block identifies a block of code that MAY cause exceptions to be thrown.
	- Whenever you use functions that throw exceptions, make sure they are in try blocks.
- `try` blocks are followed by a `catch`, which will only be activated if an exception is thrown.
```c++
try{
//block of code that could throw exception
}
catch(ExceptionName){
//what to do to handle exception
//typically some sort of error output with cerr << (different from cout)
}
```

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
			//if the input is NOT Q, we need to convert it to a #
//--------------------------------------------------------------
			//since we will be using stod(), we need to be ready to catch exceptions
			try{
				//the following call to stod will either throw an exception or not
				num = stod(input);
				//the following lines of code will ONLY be reached if no exception is thrown
				count++;//increase count by 1
				cout << "You entered: " << num << "\n";
				sum+=num;
				cout << "Current total sum: " << sum << "\n";
			}
			//if an exception is thrown, we need to catch it
			catch(const invalid_argument&){
				cerr << "Invalid value. Please enter a number to sum, or enter \"Q\" or \"q\" to quit.\n";
			}
			catch(const out_of_range&){
				cerr << "Value entered is out of range of a double. Please try again.\n";
			}
//------------------------------------------------------------------
		}
	}
	//we will exit the loop once the break statement above is reached
	cout << "The final sum of the " << count << " values you entered is: " << sum << "\n";
	
	
	return 0;
}
```


## Nested Loops
You can have a loop inside of a loop
Let’s look at an example...

###### Example
```c++
1 | int loopCount = 0;
2 | for(int i = 0; i < 2; i++) {
3 | 	cout << "Hello from the first loop";
4 | 	for(int j = 10; j < 16; j+=2){
5 | 		cout << "\tHello from the second loop\n";
6 | 		loopCount++;
7 | 	}
8 | 	loopCount++;
9 | 	cout << "\n";
10| }
```
1) Lets call the loop at lines (1-3,8-10), Loop 1. And the loop at lines (4-7), Loop 2. Notice that Loop 2 is inside of Loop 1. 
2) Loop 1's statement runs, then the condition is checked, if it is true, we go into the body of the loop.
3) The cout statement inside Loop 1. is executed.
4) We now reach Loop 2. Loop 2's initialization statement runs, then the condition is checked. If it is true, we go into the body of Loop 2.
5) The cout statement inside of Loop 2 is executed. LoopCount is incremented by 1.
6) At the end of Loop 2, the j+=2 update statement is executed.
7) Loop 2's condition is checked again, if it is true, we go back to step 5. Repeat until Loop 2's condition is false. 
8) Once Loop 2's condition is false, the second cout statement of Loop 1 is executed and loopCount is incremented by 1
9) At the end of Loop 1, the i++ statement Is executed.
10) Loop 1's condition is checked again. If it is true, we go back to step 3.
11) Repeat steps 3-10 until Loop condition is false. 


## How can we use a loop to determine if a number is prime or not?
Definition of prime numbers:
- A number greater than 1 with only two factors: 1 and itself
- Examples : 2, 3, 5, 7, 11, 13, 17, 19

Given a number, n, how can we determined if it is prime? What characteristics does it
need to have?
