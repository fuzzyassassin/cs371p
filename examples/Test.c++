// --------
// Test.c++
// --------

#include <cassert>  // assert
#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

template <typename T>
struct A {
    virtual string f () {
        return "A::f()";}};

template <typename T>
struct B : A<T> {
    string f () {
        return "B::f()";}};

int main () {
    cout << "Test.c++" << endl;

    A<int>* p = new B<int>;
    assert(p->f() == "B::f()");

    cout << "Done." << endl;
    return 0;}
