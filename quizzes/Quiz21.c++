/*
CS371p: Quiz #21 (5 pts) <Aizhuldyz>
*/

/* -----------------------------------------------------------------------
 1. What does CRC stand for?
    [Why getter and setter methods are evil]
    (1 pt)

class, responsibilities, collaborators
*/

/* -----------------------------------------------------------------------
 2. What is the output of the following?
    (3 pts)

f(int&)
f(const int&)
f(const int&)
*/

#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

string f (int&) {
    return "f(int&)";}

string f (const int&) {
    return "f(const int&)";}

int main () {
          int i  = 2;
    const int ci = 3;

    cout << f(i)  << endl;
    cout << f(ci) << endl;
    cout << f(4)  << endl;

    return 0;}
