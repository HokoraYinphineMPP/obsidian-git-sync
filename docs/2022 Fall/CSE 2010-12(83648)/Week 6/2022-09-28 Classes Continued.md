# Chapter 5: Classes
## CSE 2010: Week 6
### Classes and Objects in Programs
In object oriented programming, we still use terms like _type_ and _instances._

**Definitions:**
- **Class:** A USER DEFINED data type that represents a general concept or idea.
- **Object:** An instance of a class.

In programming, attributes and behaviors of an object are represented by
- Data members: A variable whose value represents an attribute or characteristic of an object.
- Member functions: A function that simulates one of the behaviors of an object.


### Using Classes in C++
- Steps to using classes in C++
	1. **Design** the class.
	2. **Define** a class by providing the **class name** , **declaring** its data members, and **declaring** its member functions.
	3. **Define** the class member functions.
	4. Use the class by **instantiating/declaring** objects of that class type and applying member functions on those objects.

For this course, we will show you how to separate your files when using classes.
1. Interface file: will have the class definition (class.h)
2. Implementation file: will have the class member function definitions (class.cpp)
3. Application file: Will have the program that uses the class (.cpp file where your main() function will be).


### Step 1: Designing a class

When you are designing a class, think about the following:


● What idea or concept do you want to represent?
○ Circle
○ Person
○ Car


● What “attributes” or “characteristics” do you need to properly represent this type?
○ Circle
■ Radius
○ Person
■ Name
■ Age
■ Salary
■ Job
○ Car
■ Make
■ Model
■ Color
■ Year


● What “behavior” do you want instances of these types to do?
○ Access its attributes
○ Change its attributes

Class name

Class data members

Class Member functions


### Step 1.2: Deciding on Class Accessibility

Access modifiers determine how a class can be accessed from within or from outside of the class.


● Public :
○ Available to anyone outside/within the class


● Private:
○ Available only within the class


● Protected:
○ Available only within the class and in derived classes (will learn more about this in Chapter 8).

Some rules of thumb:

● Make all of your class data members private. You do not want their values to be erroneously


accessed or changed.
○ This is the main idea behind encapsulation.

● Your class will have public “setter” and “getter” functions to access/change their private data

members.


● Make member functions private only if you don’t want the outside world to access them.
○ They can still be called from fellow class functions.

Going to stick with these for now


## Step 2: Defining the Class

- Class definitions are stored in a header file, typically named the same as the class: className.h
- Within that file you have the following:

###### //any include statements of other libraries or classes your class might need

###### #ifndef CLASSNAME_H

###### #define CLASSNAME_H

class ClassName

###### {

###### public:

###### Default Constructor


Overload Constructor
Destructor

###### Other member functions (setters, getters, etc)

###### private:


data members

###### member functions you want to be private

###### };

###### #endif


● These are pre-processor directives, aka header guards.
● Used so that the compiler doesn’t get confused about
multiple class definitions with the same name.


## Step 2: Defining the Class

- Class definitions are stored in a header file, typically named the same as the class: className.h
    - Within that file you have the following:

###### //any include statements of other libraries or classes your class might need

###### #ifndef CLASSNAME_H

###### #define CLASSNAME_H

class ClassName

###### {

###### public:

###### Default Constructor


Overload Constructor
Destructor

###### Other member functions (setters, getters, etc)

###### private:


data members

###### member functions you want to be private

###### };

###### #endif

- The “public” section contains member functions, constructors, and
destructors that outside functions have access to.
    ● Constructors:
       ○ A member function that creates an object when it is called and initializes
          the data members of an object.
       ○ Constructors have the same name as your class.
       ○ Default constructors have no parameters and they initialize data
          members to default values.
       ○ Overload constructors use given parameter values to initialize data
          members.
    ● Destructors:
       ○ A destructor is automatically called and executed by the system when
          the object instantiated goes out of scope.
       ○ The name of the destructor is the same as the class but has a (~) before
          it.
    ● Member Functions:
       ○ Class member functions that have direct access to data members and
          other member functions.
       ○ Setters/Mutator functions are functions that modify an object’s
          attributes aka change the state of an object.
       ○ Getters/Accessor functions simply “access” the data of an object, but
          do not modify it at all.
- Use the const keyword when defining accessor functions.


## Step 2: Defining the Class

- Class definitions are stored in a header file, typically named the same as the class: className.h
    - Within that file you have the following:

###### //any include statements of other libraries or classes your class might need

###### #ifndef CLASSNAME_H

###### #define CLASSNAME_H

class ClassName

###### {

###### public:

###### Default Constructor


Overload Constructor
Destructor

###### Other member functions (setters, getters, etc)

###### private:


data members

###### member functions you want to be private

###### };

###### #endif


● The “private” section is where you place all data members
or private functions that will make up our class.
● Only class member functions have access to these data
members and private functions, meaning outside
functions cannot directly access them without using a
member function.


Example of a Circle class Definition.

Stored in “Circle.h”


### Step 3: Defining Class Member Functions

● Ok, so we have our class defined, but now we need to actually write the code for

the member functions.

● At the top of the implementation file, you MUST have the following:

**○ #include “className.h”**

● Then define all the functions using the following format:

**○ return_type className::functionName()**

**{**

**}**

● Define every single function, constructor, and destructor that you’ve declared.

● All class member functions have direct access to the private data members, so

this means that they can use parameter values, data members, and any new

variables they declare in order to complete their task.


##### Example of Circle class

##### member function

##### definitions

Defining the constructors and

destructors.

Note that constructors have the

special ability of using an

initialization list to define data

member values.


##### Example of Circle class

##### member function

##### definitions

Defining the rest of the functions


### Step 4: Using your class by declaring OBJECTS

● Once you have defined your class and all of its member functions, you can

finally use your class!

● Use a class by declaring objects.

● Need: #include “className.h”

● To declare a new object, can use either default or overload constructor:

className objectName; //will use default constructor

className objectName(arguments); //will use overload constructor

Once you’ve declared an object, you can use it to invoke/call member functions

objectName.functionName(arguments);


##### Example program that uses the Circle class

Output:


##### Example program that uses the Circle class

Output:


## Compiling all of our separate files

- At this point we have the following 3 files:
    - Circle.h //definition of Circle class
    - Circle.cpp //member function definitions
    - Circle_main.cpp //program that uses Circle class
- We can compile all files together using a makefile
- In the makefile, we list all of our target
files/executables, and the commands we would use
to create them.
- Steps to create a makefile for the Person class:
1. vi makefile
2. Type every pair of lines that has the following
format:

target: source(s)

<tab char> rule/command

3. Now to compile and link the program, simply
    type

make


### Copy Constructors

Our previous Circle class has two constructors:

● Default constructor

● Overload/parameter constructor

Another type of constructor we can have is a **copy constructor**.

● A copy constructor copies the data member values of the given object to the new

object just created.

● After calling the copy constructor, the source and the destination objects have exactly

the same value of each data member, although they are different objects.

● The copy constructor has only one parameter type that receives the source object **by**

**reference.** The **const** modifier prevents any changes to the parameter object.


### Class Example: Rectangle

● The rectangle class has two data

members:

○ Length

○ Height

● It has no default constructor, since

we can’t have a rectangle with no

height or length.

● Our copy constructor has a single

parameter: another Rectangle

object.

● We don’t have any mutator functions

that would change the values of our

data members


### Rectangle Constructors and Destructor Definitions


● Class Invariants: One or more conditions that we must
impose on some or all of the instance data members.
● For this example, we cannot have a rectangle with a
length or height less than or equal to zero, so we will
check for this in the constructor.
● The assert() function is a library function that has no effect
when its argument is set to true. If its argument is set to
false , the program terminates.
● Logically this is what we would want to do since we have
failed to create an object that might be needed for the
remainder of the program.


● Our copy constructor uses the data members of the rect
parameter to give the new object its data member values.
We can access these values with objectName.dataMember


● We don't’ need our destructor to do anything...so you can
leave it empty.


### Rectangle Member Function Definitions


#### main.cpp

Let’s see what this looks like when it

runs....


### Some notes on Constructors & Destructors

Overloading:

● We cannot overload the default constructor (the one with no parameters), meaning you can

only define one.

● A parameter constructor can be overloaded, meaning you can have as many as you want.

● We cannot overload the copy constructor.

● We cannot overload the destructor.

Do we HAVE to have constructors and the destructor?

● If we don’t define any constructors, the system will provide a synthetic default constructor,

which will initialize data members to random values.

● If we define either a default constructor or a parameter constructor, the system will not provide

any for us.

● If we do not provide a copy constructor, the system will provide a synthetic copy constructor.

● If we do not provide a destructor, the system will provide a synthetic destructor.

Whenever possible, it is best practice to define as many as we can to make sure our class does

exactly what we intend for it to do.


