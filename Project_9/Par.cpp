/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Parallelogram.
 * Member-function definitions for Par class.
 * Par class requires two points and one length.
 */

#include "Par.h"

// constructor
Par::Par(Point p1, Point p2, int len) : Trap(p1, p2, len, len) {
  this->len = len;
}

// print coordinates in (x, y)(x, y)(x, y)(x, y) form
void Par::print() { Trap::print(); }
// use Trap class's print function, which is Quad class's print function
