/*
CS371p: Quiz #12 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following?
    (4 pts)

3 true
*/

#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    {
    int   i  = 2;
    int*  p  = &i;
    int** pp = &p;
    int** qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    return 0;}
