// --------
// Test.c++
// --------

#include <cassert>  // assert
#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

struct A {
    string f () {
        return "A::f()";}

    string f () const {
        return "A::f() const";}};

int main () {
    cout << "Test.c++" << endl;

    A x;
    assert(x.f() == "A::f()");

    const A& r = x;
    assert(r.f() == "A::f() const");

    cout << "Done." << endl;
    return 0;}
