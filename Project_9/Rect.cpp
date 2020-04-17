/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Rectangle.
 * Member-function definitions for Rect class.
 * Rect class requires one point, one length, and one height.
 */

#include "Rect.h"

// constructor
Rect::Rect(Point p1, int len, int ht) : Par(p1, Point(p1.getX(), p1.getY() + ht), len) {
  this->len = len;
  this->ht = ht;
}

// print coordinates in (x, y)(x, y)(x, y)(x, y) form
void Rect::print() { Par::print(); }
// Use Par class's print function, which is Trap class's print function,
// which is Quad class's print function
