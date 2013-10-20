/*
CS371p: Quiz #18 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following program?
    (4 pts)

-40
12
*/

#include <iostream> // cout, endl

using namespace std;

template <typename T, std::size_t N>
struct Allocator {
    char a[N];

    int& view (int i) {
        return *reinterpret_cast<int*>(&a[i]);}

    const int& view (int i) const {
        return *reinterpret_cast<const int*>(&a[i]);}

    ...};

int main () {
    assert(sizeof(double) == 8);

    Allocator<double, 100> x;

    x.allocate(5);
    x.allocate(3);

    cout << x.view(0)  << endl;
    cout << x.view(96) << endl;
    return 0;}
