	## What this lecture covers
This lecture will help prepare you to write a program using *C++*


# *C++* Overview
*C++* is a statically typed compiled object oriented programming language
files are saved in .cpp
must compile before exec: ie: terminal: g++ 

## "basic" template for *C++* programs

```c++
#include <iostream> //imports standard input/output stream library
using namespace std; //std is standard

int main() //returnformat namespacename() {...}
{
	return 0;
	/*return 0; is exit code for program
	 *main code here
	 */
}
```


## Compiling *C++* Source Files
while using terminal, use *vi* or *nano* to make .cpp files
to compile use `g++ your_file.cpp -o programName` (-o flag is output compiled data into [string] name)
to run the compiled file use `./programName`

lt and # or Alt, Shift, and 3 to show line number in nano

## *C++* Statements
*C++* statements __must__ end with a semicolon

## Basic Output
how do our programs display information or communicate with the user?

`#include ,iostream.` allows us to use the `cout` statement (c out)
`cout` statements are used to display values and expressions on the output device, aka your terminal window
`cout` syntax is
```c++
cout << var_name;
```

### Strings
sequence of chars
ex: `"Hello, World"`

ex: `"Hello,World!\n"`
`\` is the special escape character
`\n` - new line
`\t` - tab
`\\` - \
`\"` - "


### Numerical Values
you can display constant numerical values

``` c++
cout << 4 << " " << 10500 << "\n:";
```

output: `4 10500`

### numerical expressions
numerical expressions are expressings made up of numerical values and arithmetic operators

uses
```
addition            +
subtraction         -
multiplication      *
division            /
modulus             %
```

##### operators order (PEMDAS)
```
()
*/ %
+ -
left to right
```

ie:
``` c++
cout << "123 + 345 =" << 123*345 << "\n";
```
output:
`123 * 345 =42435`

## Variables
you can store values in memory using variables
ie: `int x=3;`

in *C++* you __must__ declare datatype of the varibale
ie:
```c++
#include <iostream>
using namespace std;
int main()
{
	int x=10;
	cout << x << "\n";
	cout << x+40 << "\n";
	return 0;
}
```

## Basic Input

`cin` statements are used to take [input] through an input device: keyboard, file, etc
`cin` statement syntax
``` c++
cin >> variableName;
```

ie:
```c++
#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	cout << "Please enter your age:";
	cin >> age;
	cout << "You are " << age << " Years old.";
}
```


