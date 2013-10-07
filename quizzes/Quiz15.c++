/*
CS371p: Quiz #15 (5 pts) <Aizhuldzy>
*/

/* -----------------------------------------------------------------------
 1. What distinguishes refinement overriding from replacement overriding?
    [Sec. 10.7, Pg. 217]
    (2 pts)

the overriding method replaces the base version
the overriding method runs in a addition to the base version
*/

/* -----------------------------------------------------------------------
 2. What is the output of the following?
    (2 pts)

0 0
32 0
32 -5
*/

#include <iostream> // cout, endl

using namespace std;

struct A {
    static int c;
    static int d;

    A  ()    {c +=  1;}
    A  (int) {c += 10;}
    ~A ()    {d -=  1;}};

int A::c = 0;
int A::d = 0;

int main () {
    {
    cout << A::c << " ";
    cout << A::d << endl;
    A a[5] = {2, 3, 4};
    cout << A::c << " ";
    cout << A::d << endl;
    }
    cout << A::c << " ";
    cout << A::d << endl;

    return 0;}
