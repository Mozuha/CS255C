/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Square.
 * Member-function definitions for Square class.
 * Square class requires one point and one length.
 */

#include "Square.h"

// constructor
Square::Square(Point p1, int len) : Rect(p1, len, len) {
  this->len = len;
}

// print coordinates in (x, y)(x, y)(x, y)(x, y) form
void Square::print() { Rect::print(); }
// Use Rect class's print function, which is Par class's print function,
// which is Trap class's print function, which is Quad class's print function