/*
CS371p: Quiz #22 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. The keyword "static" as a modifier of a "local variable" causes what
    to NOT change?
    (1 pt)

scope
*/

/* -----------------------------------------------------------------------
 2. The keyword "static" as a modifier of a "global variable" causes what
    to change?
    (1 pt)

scope
*/

/* -----------------------------------------------------------------------
 3. What is the output of the following?
    (2 pts)

true
false
false
*/

#include <iostream> // cout, endl

template <typename T>
struct A {
    static int si;};

template <typename T>
int A<T>::si;

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    cout << ( A<int>::si  ==  A<double>::si)  << endl;
    cout << (&A<int>::si  == &A<double>::si)  << endl;
    cout << (&A<int>().si == &A<double>().si) << endl;

    return 0;}
