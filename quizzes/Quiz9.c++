/*
CS371p: Quiz #9 (5 pts) <Aizhuldyz>
*/

/* -----------------------------------------------------------------------
 1. In Java, describe the subjects and objects of the verbs implements
    and extends.
    Be precise.
    (2 pts)

interfaces can extend one or more interfaces
classes can implement one or more interfaces
classes can extend one class
*/

/* -----------------------------------------------------------------------
 2. What is the output of the following C++ code?
    (2 pts)

24
24
24
40
*/

#include <cassert>  // assert
#include <iostream> // cout, endl

template <typename T>
class A {
    int    i;
    double d;
    T      x;};

int main () {
    using namespace std;

    assert(sizeof(char)   == 1);
    assert(sizeof(int)    == 4);
    assert(sizeof(double) == 8);

    cout << sizeof(A<char>)     << endl;
    cout << sizeof(A<int>)      << endl;
    cout << sizeof(A<double>)   << endl;
    cout << sizeof(A< A<int> >) << endl;

    return 0;}
