/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Quadrilateral.
 * Member-function definitions for Quad class.
 * Quad class requires four points.
 */

#include "Quad.h"
#include <iostream>
using namespace std;

// constructor
Quad::Quad(Point p1, Point p2, Point p3, Point p4) {
  this->p1 = p1;
  this->p2 = p2;
  this->p3 = p3;
  this->p4 = p4;
}

// print coordinates in (x, y)(x, y)(x, y)(x, y) form
void Quad::print() {
  cout << "Quadrilateral's points:" << endl;
  p1.print();
  p2.print();
  p3.print();
  p4.print();
  cout << endl;
}
