// ----------------------------
// projects/collatz/Collatz.c++
// Copyright (C) 2013
// Glenn P. Downing
// ----------------------------

// --------
// includes
// --------

#include <cassert>  // assert
#include <iostream> // endl, istream, ostream
#include <utility>  // pair

#include "Collatz.h"

// ------------
// collatz_read
// ------------

std::pair<int, int> collatz_read (std::istreamiterator& p) {
    *p >> i;
    ++p;
    *p >> j;
    assert(i > 0);
    assert(j > 0);
    return true;}

// ------------
// collatz_eval
// ------------

int collatz_eval (const std::pair<int, int>& p) {
    // <your code>
    int v = 1;
    assert(v > 0);
    return v;}

// -------------
// collatz_print
// -------------

void collatz_print (std::ostream& w, const std::pair<int, int>& p, int v) {
    w << p.first << " " << p.second << " " << v << std::endl;}

// -------------
// collatz_solve
// -------------

void collatz_solve (std::istream& r, std::ostream& w) {
    std::istream_iterator b = r;
    std::istream_iterator e;
    while (b != e) {
        std::pair<int, int> p = collatz_read(b);
        const int           v = collatz_eval(p);
        collatz.print(w, p, v);
        ++b;}}
