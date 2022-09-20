# Using the rand() Function to Generate Random Numbers
**Function Name:** `rand()`
**Necessary libraries:** \#include \<cstdlib>, \#include \<ctime>
**Description:**
`rand() `is a function that returns a random integer number in the range between 0 and RAND_MAX (RAND_MAX = ~32767).
Before calling rand(), it is necessary to initialize it with `srand()`. `srand()` requires a seed to initialize the `rand()` function, and we want this to be as random as possible, so we utilize the `time()` function, which returns the amount of time that has passed on the system running the program.

Once we initialize it, we can call rand() to return a random integer. But if we just call it on its own, it will return a random number between 0 and RAND_MAX. If we want it to be within a specific range, we use the % operator.

**Steps to use rand():**
1. Call `srand( time(NULL));`
2. Call `rand()` and use `%` to get values within a range

###### Examples:
```c++
int v1 = rand() % 100; // v1 in the range 0 to 99
int v2 = rand() % 100 + 1; // v2 in the range 1 to 100
int v3 = rand() % 30 + 1985; // v3 in the range 1985-2014  
```

###### Example Code:
```c++
#include <iostream> //needed for cout/cin
#include <cstdlib> //needed for rand() and srand()
#include <ctime> //needed for time()

using namespace std;

int main()
{
	cout << "This program will print 10 random numbers between the range of 1 and 20\n";
	
	//initialize rand() with srand()
	srand(time(NULL));
	
	//the following loop will run the code of generating a random number between 1 and 20, 10 times
	for(int i = 0; i < 10; i++){
		int randomNum = rand() % 20 + 1;
		cout << "Random Number " << i+1 << ":" << randomNum << "\n";
	}
	
	return 0;
}
```

Output:
```
This program will print 10 random numbers between the range of 1 and 20
Random Number 1:11
Random Number 2:14
Random Number 3:2
Random Number 4:12
Random Number 5:19
Random Number 6:2
Random Number 7:9
Random Number 8:16
Random Number 9:18
Random Number 10:16
```
