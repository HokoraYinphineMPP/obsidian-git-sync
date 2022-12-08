# Chapter 10: Intro to Recursion

## CSE 2010 Week 13

Code and Figures from : “C++ programming: an object-oriented approach” - Forouzan, Behrouz A, Gilberg, Richard, 2020.


## Introduction

##### In previous chapters, we have learned to write functions to perform specific tasks.

##### When the task requires something to be done repeatedly, we have used iteration

##### (loops).

##### Now we are going to learn how to solve repetitive problems recursively.

##### Repetition vs Recursion

##### ● In a simple iteration, we use a counter to repeat a task (chunk of code) n times.

##### ● In recursion, the function does the task only once, but then it calls itself n-

##### times to achieve the same goal.


## So what exactly is recursion..

#### ● Recursion is a powerful programming technique that allows us to break

#### up complex computational problems into smaller, more simple ones.

#### ● Recursion even allows us to implement a solution in a way that mirrors

#### our natural (human) way of thinking about a problem.

#### ● We can accomplish recursion by implementing functions that call

#### themselves to complete a task.

**There are 2 key requirements to make sure that our recursive functions are successful:**

###### 1. Every recursive call must simplify the computation in some way (use smaller values

###### with each call).

###### 2. There must be special cases to handle the simplest computations directly.

```
○ Each recursive function has a general case and base case.
○ A base case is the case that will terminate the recursion, while a general case is related to
calls that do something and continue the recursion.
```

## Our first (simple) recursive problem - void recursion

#### Assume that we need to print n asterisks on a line and the value of n is known.

#### Let’s see how we can solve this iteratively and recursively.

```
The function is called a single time, and
the loop is controlled by reducing the
value of n with each iteration with n--.
```
```
The function is called n-1 times. In each call, except the
last where n=0, the function prints a single *.
```
```
What are our general and base cases?
```

### Closer look at what’s going

### on...


## Another example - value returning recursion

#### Assume that we need to find the sum of all numbers from 0 to n , then return

#### the sum to the calling function.

```
In both programs, we are summing the numbers backward, from n to 0.
total = n + n-1 + n-2 + ...+ 1 + 0
Base case: n<=
General case: sum(n-1) + n
```

### Let’s examine the flow of

### the functions...


## Void vs. Value Returning Recursive Functions

For void recursive functions, general cases are
continuously called until a base case is reached. The
general case does not need to hold any information.

```
For value-returning recursive functions, the general cases
are called until the base case is reached. Each general case
must hold some information until the call to the next step
is returned.
```

## Recursion is one of those concepts that gets easier to

## understand as you see more examples, so we’re going to

## look over several recursive algorithms.


## For now let’s look at Fibonacci Numbers

#### The Fibonacci sequence is a sequence of numbers in which each number is

#### the sum of the previous two numbers.

#### The first 10 terms of a sequence are:

#### 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

#### The Fibonacci numbers problem has two base cases and a general case

#### Base Case: F(0) = 0 & F(1) = 1

#### General Case: F(n) = F(n-1) + F(n-2)


### Recursive Implementation

### to find the nth Fibonacci #

The Fibonacci numbers
problem has two base cases
and a general case

**Base Case:** F(0) = 0 & F(1) = 1

**General Case:** F(n) = F(n-1) +
F(n-2)

```
Output
```

## Recursive Trace


