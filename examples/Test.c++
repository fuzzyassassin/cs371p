// --------
// Test.c++
// --------

#include <cassert>  // assert
#include <iostream> // cout, endl
#include <string>   // string

using namespace std;

void f (int& r, int& s) {
    cout << (&r == &s) << endl;}

int main () {
    cout << "Test.c++" << endl;

    int i = 2;
    f(i, i);

    cout << "Done." << endl;
    return 0;}
