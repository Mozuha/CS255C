/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * Parallelogram.
 * This is a header file for Par class.
 * Contains prototypes for methods and variables of Par class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_PAR_H
#define C_PROJECT_PAR_H

#include "Trap.h"

// Par class definition
class Par : Trap { // Par class inherits Trap class
  private:
    int len; // length
  public:
    Par(Point, Point, int); // constructor
    void print(); // print coordinates
};

#endif //C_PROJECT_PAR_H
