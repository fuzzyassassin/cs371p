/*
CS371p: Quiz #4 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following program?
    (2 pts)

5 11
*/

#include <iostream> // cout, endl

using namespace std;

int f (int n) {
    return n + (n >> 1) + 1;}

int main () {
    cout << f(3) << " ";
    cout << f(7) << endl;
    return 0;}

/* -----------------------------------------------------------------------
 2. In the context of Project #1: Collatz, what is f() computing?
    (1 pt)

For odd n it's computing (3n + 1) / 2.
(3n + 1) / 2
3n/2 + 1/2
n + n/2 + 1/2
n + n/2 + 1, because n is odd
n + (n >> 1) + 1
*/

/* -----------------------------------------------------------------------
 3. Describe the three kinds of cache: lazy, eager, meta.
    (1 pt)

lazy: fill as you read
eager: fill before you read
meta: fill outside of program
*/
