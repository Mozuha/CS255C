/*
 * Apr 10, 2020
 * Mizuki Hashimoto
 * 7th edition p570 Ex12.8
 * This is a program to test the function of shapes class hierarchy.
 * Shapes are Quadrilateral, Trapezoid, Parallelogram, Rectangle, and Square.
 * The type and the number of the parameter is depends on the shape. The options are point and length.
 * Receives two integers and set it as a point's x-axis and y-axis.
 * Returns the coordinates of the shape.
 */

#include "Point.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main() {
  int x = 0; // x-axis
  int y = 0; // y-axis
  int len1 = 0; // length
  int len2 = 0; // length
  char shape; // choice of shape
  char ans; // user answer for yes/no question
  bool repeat; // repeat in the case of invalid input

  do {
    repeat = false;
    cout << "\nWhat shape would you like to create?" << endl;
    cout << "(p = parallelogram, q = quadrilateral, r = rectangle, s = square, or t = trapezoid)" << endl;
    cin >> shape;

    switch (shape) {
      // parallelogram
      case 'p': {
        cout << "Parallelogram selected." << endl;
        cout << "Enter first point (two integers):" << endl;
        cin >> x >> y; // x-axis, y-axis
        Point p1(x, y); // instantiate object p1 of Point class
        cout << "Enter second point (two integers):" << endl;
        cin >> x >> y;
        Point p2(x, y); // instantiate object p2 of Point class
        cout << "Enter length:" << endl;
        cin >> len1; // length
        Par coordinate(p1, p2, len1); // instantiate object coordinate of Par class
        coordinate.print(); // print coordinates of the shape
        break;
      }
      // quadrilateral
      case 'q': {
        cout << "Quadrilateral selected." << endl;
        cout << "Enter first point (two integers):" << endl;
        cin >> x >> y;
        Point p1(x, y);
        cout << "Enter second point (two integers):" << endl;
        cin >> x >> y;
        Point p2(x, y);
        cout << "Enter third point (two integers):" << endl;
        cin >> x >> y;
        Point p3(x, y);
        cout << "Enter fourth point (two integers):" << endl;
        cin >> x >> y;
        Point p4(x, y);
        Quad coordinate(p1, p2, p3, p4); // instantiate object coordinate of Quad class
        coordinate.print();
        break;
      }
      // rectangle
      case 'r': {
        cout << "Rectangle selected." << endl;
        cout << "Enter point (two integers):" << endl;
        cin >> x >> y;
        Point p1(x, y);
        cout << "Enter length (integer):" << endl;
        cin >> len1;
        cout << "Enter height (integer):" << endl;
        cin >> len2; // height
        Rect coordinate(p1, len1, len2); // instantiate object coordinate of Rect class
        coordinate.print();
        break;
      }
      // square
      case 's': {
        cout << "Square selected." << endl;
        cout << "Enter point (two integers):" << endl;
        cin >> x >> y;
        Point p1(x, y);
        cout << "Enter length (integer):" << endl;
        cin >> len1;
        Square coordinate(p1, len1); // instantiate object coordinate of Square class
        coordinate.print();
        break;
      }
      // trapezoid
      case 't': {
        cout << "Trapezoid selected." << endl;
        cout << "Enter first point (two integers):" << endl;
        cin >> x >> y;
        Point p1(x, y);
        cout << "Enter second point (two integers):" << endl;
        cin >> x >> y;
        Point p2(x, y);
        cout << "Enter first length (integer):" << endl;
        cin >> len1;
        cout << "Enter second length (integer):" << endl;
        cin >> len2;
        Trap coordinate(p1, p2, len1, len2); // instantiate object of Trap class
        coordinate.print();
        break;
      }
      // invalid input
      default: {
        cout << "Invalid input. Try again." << endl;
        repeat = true;
        break;
      }
    }

    if (repeat) {
      ans = 'y'; // automatically move to the next loop if the input was invalid
    } else {
      cout << "\nWould you like to enter another shape? (y/n):" << endl;
      cin >> ans;
    }
  } while (ans == 'y'); // loop if user enter y
}

/*
----------------output------------------
What shape would you like to create?
(p = parallelogram, q = quadrilateral, r = rectangle, s = square, or t = trapezoid)
s
Square selected.
Enter point (two integers):
1 1
Enter length (integer):
9
Quadrilateral's points:
(1, 1)(1, 10)(10, 1)(10, 10)

Would you like to enter another shape? (y/n):
y

What shape would you like to create?
(p = parallelogram, q = quadrilateral, r = rectangle, s = square, or t = trapezoid)
p
Parallelogram selected.
Enter first point (two integers):
2 3
Enter second point (two integers):
4 5
Enter length:
7
Quadrilateral's points:
(2, 3)(4, 5)(9, 3)(11, 5)

Would you like to enter another shape? (y/n):
n
 */
