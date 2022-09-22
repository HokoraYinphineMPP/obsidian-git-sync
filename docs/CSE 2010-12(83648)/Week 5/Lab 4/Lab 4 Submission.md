## Lab 04: Functions (Due 10/3, 5:30pm)

30 Possible Points



# LAB 4: Functions (30 points total)  
**Due: Monday October 3 by 5:30pm on Canvas**

###### Please remember to indent your code properly and add descriptive comments explaining the logic of your code. **Failing to do this will result in points deducted.**

## **Exercise 1: Listing Prime Numbers with functions (5 points)**  
In Lab 3, we wrote a program that printed the prime numbers within a range provided by the user. Now we are going to write a similar program, but with a function that determines whether a number provided is prime or not.  
Write a program that prompts the user to enter an int *start* and an int *end*. The program then loops and prints the prime numbers between start and end, inclusive, by calling a function *isPrime()*. You will send each value to *isPrime()* as the loop traverses through the range. *isPrime()* returns *true* if the number passed into it is a prime number, and returns *false* otherwise. (Hint: If this function returns true or false, how can we use it to control output of numbers?) The function should have the following declaration:  

`bool isPrime(int n);`
Run your code once to show that it works when the user enters : 2 and 100  
  
## **Exercise 2: Implementing Mathematical Equations with functions (10 points)**
Write a program that prompts the user to enter whether they have a sphere or a cylinder. If the user enters “*sphere*”, the program then prompts the user to enter one value: radius. The program then sends radius to the functions *sphere_volume()* and *sphere_surface()*, and prints the results.  
  
If the user enters “*cylinder*”, the program then prompts the user to enter two values: radius and height. The program then sends radius and height to the functions *cylinder_volume()* and *cylinder_surface()*, and prints the results.  
  
If the user enters anything other than “sphere” or “cylinder”, print “invalid entry”. Because the function does not need to change the function arguments, you should pass them into the function as const references. A const parameter will make sure the value of the parameter does not change, and passing a parameter by reference does not make a copy of the value (so having const references makes it a bit more efficient). You should have the following function declarations:  
  
`double sphere_volume(const double & r);`
`double sphere_surface(const double & r);`
`double cylinder_volume(const double & r, const double & h);`
`double cylinder_surface(const double & r, const double & h);`

Run your code three times. Once where the user enters sphere, once where they enter cylinder, and finally when they make an invalid entry.  

## **Exercise 3: ATM (15 points)**
For this exercise, we will implement an interactive ATM program that **repeatedly** allows the user to view their balance, make a deposit, make a withdrawal, or quit.  
  
After prompting the user for the action they wish to take, the program should then ask the user which account they would like to perform that action on (Savings or Checking). After obtaining the desired action and account, your program should make a function call to one of the following functions:  
  
`void print_balance(string account);`
	- Prints the user’s account balance, where string parameter account is equal to “S” if they wish to see their savings balance, “C” if they wish to see their checking balance, or “B” to see both balances.  
  
`void deposit(string account);`
	- Prompts the user for the amount they wish to deposit into the desired account. The string parameter account is equal to “S” if they wish to deposit into their savings, or “C” if they wish to deposit into their checking.
	- After depositing the amount, this function calls **print_balance()** to show their account’s new balance.

`void withdraw(string account);`
	- Prompts the user for the amount they wish to withdraw from the desired account. The string parameter account is equal to “S” if they wish to withdraw from their savings, or “C” if they wish to withdraw from their checking.
	- The function checks if the amount is valid (if it is less than or equal to what they have in their account).
		- If it is valid, then the function withdraws the amount and calls **print_balance()** to show their account’s new balance.  
		- If the withdrawal is not valid, then the function deducts a $3.00 penalty fee from their account, displays a message relaying the deduction, and calls **print_balance()** to print their account’s new balance.  
  
Once the user has selected to quit, display the final balances for both accounts.  
  
Declare global variables to represent your user’s savings and checking balances. **Global variables** are variables that are declared outside of all functions (in the global namespace), and are accessible by all functions, including main. Using global variables will allow you to use them inside any of the functions and allow you to make changes that will affect the global variables.

Be sure to test your program thoroughly to show that all functions work.

Find sample output and sample code on following pages: You may use the provided code, or start from scratch

**EXAMPLE of what your output could look like:**
```
Welcome to CSE Bank!  
Please select from the following menu.  
Enter “B” to check your balance.  
Enter “W” to make a withdrawal.  
Enter “D” to make a deposit.  
Enter “Q” to quit.  
Enter action: B  
  
Which account would you like to see the balance of?  
Enter “C” for Checking, “S” for Savings, or “B” to see both.  
Enter account: C  
  
Checking Account Balance: $1500.00  
  
Please select from the following menu.  
Enter “B” to check your balance.  
Enter “W” to make a withdrawal.  
Enter “D” to make a deposit.  
Enter “Q” to quit.  
Enter action: W  
  
Which account would you like to withdraw from?  
Enter “C” for Checking or “S” for Savings.  
Enter account: C  
  
Enter withdrawal amount: 600.00  
Withdrawal complete.  
Checking Account Balance: $900.00  
  
Please select from the following menu.  
Enter “B” to check your balance.  
Enter “W” to make a withdrawal.  
Enter “D” to make a deposit.  
Enter “Q” to quit.  
Enter action: cat  
  
That is not a valid entry.  
  
Please select from the following menu.  
Enter “B” to check your balance.  
Enter “W” to make a withdrawal.  
Enter “D” to make a deposit.  
Enter “Q” to quit.  
Enter action: Q  
  
Your final balances are:  
Savings Account Balance: $3500.00  
Checking Account Balance: $900.00  
  
Thank you for using the CSE Bank! Have a great day!
```

You may use the following code to get you started (TYPE IT OUT, DO NOT COPY AND PASTE), or feel free to come up with your own implementation.
```c++
/*  
* YOUR NAME  
* CSE 2010 Lab 4, Exercise 3  
* Program Description:  
* This program simulates an interactive ATM that allows a user  
* to check their balance, make a withdrawal, or make a deposit into either  
* their checking or savings account.  
*/  
#include <iostream>  
#include <string>  
#include <iomanip>  
  
using namespace std;  
  
//the following variables are global variables that can be used by any functions  
double CHECKING_BALANCE = 1500.00;  
double SAVINGS_BALANCE = 3500.00;  
  
//function forward declarations/prototypes  
void print_balance(string account);  
void deposit(string account);  
void withdraw(string account);  
  
int main()  
{  
string input; // variable will hold the user's menu selection  
string account; //variable will hold user's account selection  
cout << fixed << setprecision(2);//show 2 places after decimal  
  
cout << "Welcome to the CSE Bank!" << endl;  
  
/*  
* Implement the loop that will repeatedly prompt the user  
* for their selection from a menu  
* It will repeat until the user enters "Q" to quit  
* Remember to handle the case where the user enters something  
* that is not a menu option  
*/  
  
  
  
/*  
* Print the user's final balances using a call to print_balance()  
*/  
cout << "Your final balances are: " << endl;  
print_balance("B");  
cout << "Thank you for using the CSE Bank! Have a great day!" << endl;  
return 0;  
}

void print_balance(string account)  
{  
//print account balance depending on what the value of variable account is  
if(account == "B"){  
cout << setprecision(2) <<"Savings Account Balance: $" << SAVINGS_BALANCE << endl;  
cout << setprecision(2) <<"Checking Account Balance: $" << CHECKING_BALANCE << endl;  
}  
else if(account == "S")  
cout << setprecision(2) <<"Savings Account Balance: $" << SAVINGS_BALANCE << endl;  
else if(account == "C")  
cout << setprecision(2) <<"Checking Account Balance: $" << CHECKING_BALANCE << endl;  
else  
cout << "Account not recognized" << endl; // case where account is not valid  
}  
  
/*  
* DEFINE REMAINING FUNCTIONS HERE  
*/
```




Your submission for Lab 4 should include the following:

-   .cpp file for Exercise 1
-   Screenshot for Exercise 1
-   .cpp file for Exercise 2
-   Screenshot(s) for Exercise 2
-   .cpp file for Exercise 3
-   Screenshot for Exercise 3