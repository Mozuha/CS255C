/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Square
 * This is a header file for Square class.
 * Contains prototypes for methods and variables of Square class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_SQUARE_H
#define C_PROJECT_SQUARE_H

#include "Rect.h"

// Square class definition
class Square : Rect { // Square class inherits Rect class
  private:
    int len; // length
  public:
    Square(Point, int); // constructor
    void print(); // print coordinates
};

#endif //C_PROJECT_SQUARE_H
