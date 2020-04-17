/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Trapezoid.
 * Member-function definitions for Trap class.
 * Trap class requires two points and two lengths.
 */

#include "Trap.h"

// constructor
Trap::Trap(Point p1, Point p2, int len1, int len2) :
  Quad(p1, p2, Point(p1.getX() + len1, p1.getY()), Point(p2.getX() + len2, p2.getY())) {
  this->len1 = len1;
  this->len2 = len2;
}

// print coordinates in (x, y)(x, y)(x, y)(x, y) form
void Trap::print() { Quad::print(); } // use Quad class's print function
