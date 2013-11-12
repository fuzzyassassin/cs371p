/*
CS371p: Quiz #29 (5 pts) <Aizhuldyz>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following?
    (4 pts)

A(int)
A(const A&)
A(int)
A(int)
*/

#include <iostream> // cout, endl

using namespace std;

struct A {
    A (int) {
        cout << "A(int)" << endl;}

    A (const A&) {
        cout << "A(const A&)" << endl;}};

void f (A)        {}
void g (const A&) {}

int main () {
    using namespace std;

    A x(2);

    f(x);
    f(3);

    g(x);
    g(4);

    return 0;}
