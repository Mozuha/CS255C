/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Rectangle.
 * This is a header file for Rect class.
 * Contains prototypes for methods and variables of Rect class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_RECT_H
#define C_PROJECT_RECT_H

#include "Par.h"

// Rect class definition
class Rect : Par { // Rect class inherits Par class
  private:
    int len; // length
    int ht; // height
  public:
    Rect(Point, int, int); // constructor
    void print(); // print coordinates
};

#endif //C_PROJECT_RECT_H
