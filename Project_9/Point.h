/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * This is a header file for Point class.
 * Contains prototypes for methods and variables of Point class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_POINT_H
#define C_PROJECT_POINT_H

// Point class definition
class Point {
  private:
    int x, y; // x-axis, y-axis
  public:
    Point(); // constructor
    Point(int, int); // constructor
    int getX(); // get x value
    int getY(); // get y value
    void print(); // print coordinate of the point in (x, y) form
};

#endif //C_PROJECT_POINT_H
