/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Trapezoid.
 * This is a header file for Trap class.
 * Contains prototypes for methods and variables of Trap class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_TRAP_H
#define C_PROJECT_TRAP_H

#include "Quad.h"

// Trap class definition
class Trap : Quad { // Trap class inherits Quad class
  private:
    int len1, len2; // two lengths
  public:
    Trap(Point, Point, int, int); // constructor
    void print(); // print coordinates
};

#endif //C_PROJECT_TRAP_H
