// --------
// Test.c++
// --------

#include <cassert>  // assert
#include <cstring>  // strcmp, strcpy
#include <iostream> // cout, endl
#include <sstream>  // ostringstream

using namespace std;

struct Symbol {
    char* name;

    Symbol (int n) {
        ostringstream ostr;
        ostr << n << endl;
        const char *s = ostr.str().c_str();
        name = new char[strlen(s)+1];
        strcpy(name, s);}};

int main () {
    cout << "Test.c++" << endl;

    Symbol x(123);
    assert(strcmp(x.name, "123\n") == 0);

    cout << "Done." << endl;
    return 0;}
