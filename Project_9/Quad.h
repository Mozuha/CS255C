/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Quadrilateral.
 * This is a header file for Quad class.
 * Contains prototypes for methods and variables of Quad class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_QUAD_H
#define C_PROJECT_QUAD_H

#include "Point.h"

// Quad class definition
class Quad {
  private:
    Point p1, p2, p3, p4; // four points
  public:
    Quad(Point, Point, Point, Point); // constructor
    void print(); // print coordinates
};

#endif //C_PROJECT_QUAD_H
