/*
CS371p: Quiz #28 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. Define the default constructor and copy constructor for class A.
    (4 pts)
*/

#include <iostream> // cout, endl

using namespace std;

struct X {X (int) {}};
struct Y {Y (int) {}};

struct A : X {
    Y _y;

    A () :
            X (2), _y (3)
        {}

    A (const A& rhs) :
            X (rhs), _y (rhs._y)
        {}};

int main () {
    using namespace std;

    A x;
    A y(x);

    return 0;}
