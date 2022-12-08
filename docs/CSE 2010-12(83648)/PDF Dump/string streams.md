# Reminders/Announcements

```
● Lab 8 is due this Friday by 8:30pm
```
```
● Homework 3 is due next Monday November 21 by 8:30pm
```
```
● Makeup Submission for Lab 5 is now open. Will be due next Wednesday,
23 by 8:30pm.
```
```
● See Canvas Announcement for information on a summer internship
opportunity with the Department of Defense.
```

### Chapter 9: String Streams

#### CSE 2010 - Week 13


# Review: Reading From Files

```
● Make sure to #include <fstream>
● Step 1: Constructing a stream to read files.
ifstream streamName;
● Step 2: Connect the stream to the source.
Always double check that it opened properly
streamName.open(filename);
if(streamName.fail())
● Step 3: Read from the stream;
```
datatype var; streamName >> var; (^)
● Step 4: Disconnect the source
streamName.close();
● Step 5: Destroy stream....is done
automatically :)


# Review: Writing to Files

```
● Make sure to #include <fstream>
● Step 1: Constructing a stream to write to files.
ofstream streamName;
● Step 2: Connect the stream to the sink. Always double
● check that it opened properlyIf the file doesn’t exist, the program will simply create a^
new file with the name you provide.
streamName.open(filename);
if(streamName.fail())
● Step 3: Write to the stream;^
```
datatype var; //give variable some value (^)
streamName << var;
● Step 4: Disconnect the sink
streamName.close();
● Step 5: Destroy stream....is done automatically :)


## Review: Reading from and writing to the same file

```
● Make sure to #include <fstream>
● Step 1: Constructing a stream to read & write files.
fstream streamName;
● Step 2: Connect the stream to the source. Always double check that it opened properly
streamName.open(filename,ios::in|ios::out);
```
if(streamName.fail()) Cout << “Error opening file with name.\n”; (^)
● Step 3: Depending on what you want to do, use the appropriate operator; streamName >> var;//will read
streamName << var; // will write //white space or newline is reached (^)
● Step 3.1: If you expect to write after reading, you will have to also use the clear function to clear the stream and set the
eof bit to false, allowing for input at the end of the file. (streamName.clear())
● Step 4: Disconnect the source
streamName.close();
● Step 5: Destroy stream....is done automatically :)


# Getting Whole Lines of Text

```
● When we use the >> operator to get input from a file,
it will implicitly stop at the first white space or new
line.
● How can we get a whole line of text, including spaces?
○ getline() function we have been using.
● Note the difference in the following methods:
```

# String Streams

```
● With console streams (iostream) , the contents of the keyboard and
monitor are the stream of data.
● With file streams (fstream) , the contents of a file are the stream of data.
● Now let’s look at string streams , where the contents of a string are the
stream of data.
● The <sstream> library will allow us to treat C++ string objects like they
were streams.
● Why would you ever want to do such a thing?
○ Buffer up output for later display
○ Parse out the pieces of a string
○ Data type conversions
```

# Using String Streams

```
● #include <sstream> & <iostream>
● Syntax:
sstream streamName;
streamName << //will add/output to the stream
streamName >> //will use stream as input
```

# String Streams - Convert numbers to strings

```
● With string streams, we can convert numbers into strings using << and >>
stringstream ss;
int num = 12345;
ss << num; // Will store value of num into ss as a string
string strNum;//empty string variable
ss >> strNum; //will store the string “12345” into strNum
● We can convert strings into numbers using << and >>
stringstream ss;
string strNum = “12345”;
ss << strNum; //stores string value into stream
int num;//int variable
ss >> num; //will store 12345 into num as an integer
● Note: Trying to convert “cat” into an integer or double would result in the value of 0.
```

# String Streams - Convert numbers to strings

```
● With string streams, we can convert numbers into strings using << and >>
stringstream ss;
int num = 12345;
ss << num; // Will store value of num into ss as a string
string strNum;//empty string variable
ss >> strNum; //will store the string “12345” into strNum
```
(^) ● We can also convert strings into numbers using << and >>
stringstream ss;
string strNum = “12345”;
ss << strNum; //stores string value into stream
int num;//int variable
ss >> num; //will store 12345 into num as an integer
● Note: Trying to convert “cat” into an integer or double would result in the value of 0.


# String Streams - Parsing

```
● We can parse a string of many values into different variables of different datatypes.
string info = “Obi 4 03-15-2018”;
stringstream ss;
ss << info; // ss = “Obi 4 03-15-2018”
string name, DOB;
int age;
ss >> name >> age >> DOB;//stores strings into variables
//name = “Obi”
//age = 4
//DOB = “03-15-2018”
```
```
● Note: Storing the values into the variables does not clear the stream. So if we did
ss << “Hello World!”;
//ss = “Obi 4 03-15-2018 Hello World!”
```

# String Streams - Outputting streams

```
● Say we want to output the entire contents of a stream
string info = “Obi 4 03-15-2018”;
stringstream ss;
ss << info; // ss = “Obi 4 03-15-2018”
cout << ss; //will give us an error. ss is a STREAM
//we need to convert to a string
cout << ss.str();
//str() is a member functions to convert to a string
```

# Let’s look at an example!

# (Employee Example on Canvas)


# Streams Review

```
● Streams in C++ are objects that represent a device on which input and output
operations can be performed.
● Streams have states made up of bits (eof,badbit,failbit), and all bits must not be set for
it to be in a goodstate and usable.
● We can use file streams to read from and write to files.
○ #include <fstream>
■ ifstream - read from files
■ ofstream - write to files
■ fstream - read and write to files
● String Streams:
○ Allow us to treat strings as streams.
○ We can use them to convert data types.
○ We can also use them to parse through a string and place different values in different variables.
```

