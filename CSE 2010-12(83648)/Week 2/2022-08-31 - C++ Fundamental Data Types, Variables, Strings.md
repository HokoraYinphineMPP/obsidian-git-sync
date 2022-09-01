# Week 2 (August 29, 31): Fundamental Data Types, Variables, Strings

```

This week we will be going over the following topics:

-   Variables (what they are, how to declare/define, how to assign a new value, rules for variables)
-   C++ data types (numerical and character)
-   Using pre-defined libraries
-   Using character and string data types
-   string class member functions

Monday August 29, 2022:

-   [[Week 2.1 Numerical Data Types and Variables]]
    
     
    -   [C++ Keywords (Links to an external site.)](https://en.cppreference.com/w/cpp/keyword)
    -   [Data type modifiers (Links to an external site.)](https://en.cppreference.com/w/cpp/language/types)
-   [Week 2.2 Predefined Libraries and Functions.pdf](https://csusb.instructure.com/courses/14455/files/2433471?wrap=1 "Week 2.2 Predefined Libraries and Functions.pdf")
    
    https://csusb.instructure.com/courses/14455/pages/week-2-august-29-31-fundamental-data-types-variables-strings?module_item_id=1115396# 
     
    -   [<iomanip> (For displaying a specific number of digits) (Links to an external site.)](https://cplusplus.com/reference/iomanip/)

Wednesday August 31, 2022:

-   [Week 2.3 Characters & Strings.pdf](https://csusb.instructure.com/courses/14455/files/2446193?wrap=1 "Week 2.3 Characters & Strings-2.pdf") 
    
    [![](https://csusb.instructure.com/images/svg-icons/svg_icon_download.svg)Actions](https://csusb.instructure.com/courses/14455/pages/week-2-august-29-31-fundamental-data-types-variables-strings?module_item_id=1115396#)
    
    -   [char_examples.cpp](https://csusb.instructure.com/courses/14455/files/2446205?wrap=1 "char_examples.cpp")  [![](https://csusb.instructure.com/images/svg-icons/svg_icon_download.svg) Download char_examples.cpp](https://csusb.instructure.com/courses/14455/files/2446205/download?download_frd=1) 
-   [Weeks 2-4 Course Schedule.docx](https://csusb.instructure.com/courses/14455/files/2444920?wrap=1 "Week 2-4 Schedule.docx")
    
    [![](https://csusb.instructure.com/images/svg-icons/svg_icon_download.svg)Actions](https://csusb.instructure.com/courses/14455/pages/week-2-august-29-31-fundamental-data-types-variables-strings?module_item_id=1115396#)
```

# Notes
## Data types of char values
###### Characters
values that represent one single character
|C++ Keyword|Size|range of values|
|-|-|-|
|char|1 byte|0 to 127|
- Note: uses ASCII

###### Character Variables
use `char` to represent data that only requires a single character
- `chat input;`
- `char marital_status;`
`char` variable values must be within apostrophes and can only be a single character
- `char s = 115; //ok`
- `char s = 'S'; //ok`
- `char x = 'XX'; //not ok`
###### convert variable to Ascii character value
`(char)variableName`

## Strings
- values that represent a secuqnce of characters
- this is a complex data type meaning it is made up of another data type (characters)
- the string class allows us to use string objects
	- `#include string`
|C++ Keyword|Size|range of values|
|-|-|-|
|string|# of characters * 1 byte|depends on hardware|
- use strings when you need to represent one or more characters
- if you use strings, make sure you have `#include <string>`
- `string` variable values must be within quotation marks.
- each character allocates its own space in memory (1 byte) and has a position number associated with it
	- position numbers start at 0! not 1!

example
```c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Sally";
	cout << "Your name is " << name << "\n";
	
	//change string value
	name = "Bob"; //replaces value in memory
	cout << "Your name is " << name << "\n";
	
	return 0;
}
```
Output:
```
Your name is Sally
Your name is Bob
```

- We can store values into strings with `cin`
	- `cout << "Enter your first name:";`
	- `cin >> name; //user enters Bob`
	- `cout << name`

###### getline()
if we want to store the entire input, we can use the `getline()` function
`getline (istream is, string str)`
- first argument is the input stream to extract characters from (we use `cin`)
- second argument is the string to store the extracted characters
- `getline()` extracts all characters from `is` and stores them into `str` until the newline
- if there is a value stored in `str`, it will be overwritten
```c++
string fullName;
cout << "Enter your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
```

### String member functions
- `#include <string>` gives us access to string member fucntions that allow us to manipulate strings and access information about them
- syntax to use string member functions:
	- `stringName.functionName(parameters)`

#### `.length()/.size() - length`
`.length()/.size()`: invoked with a string and no parameters but it returns the number of characters in the string (int)
```c++
string fullName = "Bob Ross";
int n = fullName.length(); // n = 8
int x = fullName.size(); // x = 8
```
- note that the space is its own character

each string character has a position # the last position # is always equal to `stringName.length()-1`

fullName
|B|o|b| |R|o|s|s|
|-|-|-|-|-|-|-|-|
|0|1|2|3|4|5|6|7|
#### .substr() - substring
The `.substr()` function can be called in two different ways
`.substr(i,n)`: returns the substring where i is the starting position # and then extracts n characters
```c++
string fruit = "watermelon";
string h2o = fruit.substr(0,5);
cout << h2o << "\n"; // will display "water"
string idea = fruit.substr(2,4);
cout << idea << "\n"; // will display "term"
```

`.substr(i)`: returns the substring where `i` is the starting position #, to the end of the strin
```c++
string richMan = fruit.substr(6)
cout << richMan << "\n"; // will display "elon"
```

###### `.at(i)` - character in string
`.at(i)`: returns the character at position #i
```c++
string fruit = "watermelon";
int mid = fruit.length() / 2; //mid = 5
cout << "The middle character in \"' << fruit << "\" is \"" << fruit.at(mid) << "\"\n";
```
Output: 
```
The middle character in "watermelon" is "m"
```

###### String Concatenation
- We can put string values together "`+`"
```c++
string fname = "Bob";
string lname = "Ross";
string name = fname + " " + lname;
```

|B|o|b| |R|o|s|s|
|-|-|-|-|-|-|-|-|
|0|1|2|3|4|5|6|7|