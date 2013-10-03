/*
CS371p: Quiz #13 (5 pts) <Aizhuldyz>
*/

/* -----------------------------------------------------------------------
 1. Fill in the TWO blanks below:
    [The Open-Closed Principle]
    (2 pts)

    Software entities (classes, modules, functions, etc.) should be open
    for <BLANK>, but closed for <BLANK>.

extension
modification
*/

/* -----------------------------------------------------------------------
 2. What is the output of the following?
    (2 pts)

3 false
*/

#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    {
    int    i  = 2;
    int*   p  = &i;
    int**  pp = &p;
    int**& qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    return 0;}
