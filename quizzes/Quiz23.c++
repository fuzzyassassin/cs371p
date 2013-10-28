/*
CS371p: Quiz #23 (5 pts) <Aizhuldyz>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following?
    (4 pts)

true
false
true
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

    {
    A<int> x;
    A<int> y;
    cout << (&x.si == &y.si) << endl;
    }

    {
    A<int>    x;
    A<double> y;
    cout << (&x.si == &y.si) << endl;
    }

    return 0;}
