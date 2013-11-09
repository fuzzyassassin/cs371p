// --------
// Test.c++
// --------

#include <cassert>  // assert
#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

struct A {
    A (int) {};};

struct B : A {};

int main () {
    cout << "Test.c++" << endl;

    A x = 2;
    cout << &x;

    cout << "Done." << endl;
    return 0;}
