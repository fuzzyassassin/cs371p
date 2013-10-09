/*
CS371p: Quiz #16 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following?
    (4 pts)

A(int) A(int) A(int) A() A()
A(int) A(int) A() A() A() A() A()
=(A) =(A) =(A)
~A() ~A() ~A() ~A() ~A() ~A() ~A() ~A() ~A() ~A() ~A() ~A()
*/

#include <iostream> // cout, endl

using namespace std;

struct A {
    A             ()         {cout << "A() ";}                  // default constructor
    A             (int)      {cout << "A(int) ";}               // int constructor
    A             (const A&) {cout << "A(A) ";}                 // copy constructor
    ~A            ()         {cout << "~A() ";}                 // destructor
    A& operator = (const A&) {cout << "=(A) "; return *this;}}; // copy assignment operator

int main () {
    {
    A a[5] = {2, 3, 4};
    cout << endl;

    A b[7] = {5, 6};
    cout << endl;

    copy(a + 1, a + 4, b + 2);
    cout << endl;
    }
    cout << endl;

    return 0;}
