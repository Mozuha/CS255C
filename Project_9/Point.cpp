/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Member-function definitions for Point class
 */

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point() { x = 0; y = 0; } // constructor

Point::Point(int x, int y) { this->x = x; this->y = y; } // constructor

int Point::getX() { return x; } // get x value

int Point::getY() { return y; } // get y value

void Point::print() { cout << "(" << x << ", " << y << ")"; } // print coordinate of the point in (x, y) form
