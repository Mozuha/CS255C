/*
 * Apr 1, 2020
 * Mizuki Hashimoto
 * 7th edition p519-520 Ex11.10
 * This is a program to test the function of Rational_Overload class.
 * Receives two rational numbers r and s from the user and perform c=r+s, c=r-s, c=r*s, c=r/s, c=(r-s)/(r+s), c=-r,
 * and c=!s with overloading.
 * For each operation, returns the value in num/den form and d.dd form.
 * Also compares r and s by relational operators.
 */

#include "Rational_overload.h" // include definition of Rational_Overload class from rational_overload.h
#include <iostream>
using namespace std;

// equation print format
void printEquation(Rational_Overload r, Rational_Overload s, Rational_Overload c, char sign) {
  r.print();
  cout << " " << sign << " ";
  s.print();
  cout << " = ";
  c.print(); // num/den form
  cout << " or ";
  c.printf(); // d.dd form
  cout << endl;
}

// compare result message format
void printRelMessage(Rational_Overload r, Rational_Overload s, char message[50]) {
  r.print();
  cout << message;
  s.print();
  cout << endl;
}

int main() {
  int n, d; // numerator, denominator
  Rational_Overload c; // instantiate object c of Rational_Overload class
  char ans; // user answer for yes/no question

  do {
    cout << "Enter the numerator of the first fraction: ";
    cin >> n;
    cout << "Enter the denominator of the first fraction: ";
    cin >> d;
    Rational_Overload r(n, d); // instantiate object r of Rational_Overload class
    cout << "First fraction: ";
    r.print();
    cout << " or ";
    r.printf();
    cout << endl;

    cout << "Enter the numerator of the second fraction: ";
    cin >> n;
    cout << "Enter the denominator of the second fraction: ";
    cin >> d;
    Rational_Overload s(n, d); // instantiate object s of Rational_Overload class
    cout << "Second fraction: ";
    s.print();
    cout << " or ";
    s.printf();
    cout << endl;

    // addition
    c = r + s;
    printEquation(r, s, c, '+');

    // subtraction
    c = r - s;
    printEquation(r, s, c, '-');

    // multiplication
    c = r * s;
    printEquation(r, s, c, '*');

    // division
    c = r / s;
    printEquation(r, s, c, '/');

    c = (r - s) / (r + s);
    cout << "(";
    r.print();
    cout << " - ";
    s.print();
    cout << ") / (";
    r.print();
    cout << " + ";
    s.print();
    cout << ") = ";
    c.print();
    cout << " or ";
    c.printf();
    cout << endl;

    // smaller
    if (r < s)
      printRelMessage(r, s, " is smaller than ");

    // smaller or equal
    if (r <= s)
      printRelMessage(r, s, " is smaller than or equal to ");

    // greater
    if (r > s)
      printRelMessage(r, s, " is greater than ");

    // greater or equal
    if (r >= s)
      printRelMessage(r, s, " is greater than or equal to ");

    // equal
    if (r == s)
      printRelMessage(r, s, " is equal to ");

    // not equal
    if (r != s)
      printRelMessage(r, s, " is not equal to ");

    // negation
    r.print();
    cout << " negated is ";
    c = -r;
    c.print();
    cout << endl;

    // reciprocal
    cout << "The reciprocal of ";
    s.print();
    cout << " is ";
    c = !s;
    c.print();
    cout << endl;

    cout << "Enter a y/n to test more fractions: ";
    cin >> ans;
  } while (ans == 'y'); // loop if user enter y
}

/*
--------------output---------------
Enter the numerator of the first fraction: 4
Enter the denominator of the first fraction: 10
First fraction: 2/5 or 0.4
Enter the numerator of the second fraction: 3
Enter the denominator of the second fraction: -6
Second fraction: -1/2 or -0.5
2/5 + -1/2 = -1/10 or -0.1
2/5 - -1/2 = 9/10 or 0.9
2/5 * -1/2 = -1/5 or -0.2
2/5 / -1/2 = -4/5 or -0.8
(2/5 - -1/2) / (2/5 + -1/2) = -9/1 or -9
2/5 is greater than -1/2
2/5 is greater than or equal to -1/2
2/5 is not equal to -1/2
2/5 negated is -2/5
The reciprocal of -1/2 is -2/1
Enter a y/n to test more fractions: y
Enter the numerator of the first fraction: 0
Enter the denominator of the first fraction: 5
First fraction: 0/1 or 0
Enter the numerator of the second fraction: -3
Enter the denominator of the second fraction: -3
Second fraction: 1/1 or 1
0/1 + 1/1 = 1/1 or 1
0/1 - 1/1 = -1/1 or -1
0/1 * 1/1 = 0/1 or 0
0/1 / 1/1 = 0/1 or 0
(0/1 - 1/1) / (0/1 + 1/1) = -1/1 or -1
0/1 is smaller than 1/1
0/1 is smaller than or equal to 1/1
0/1 is not equal to 1/1
0/1 negated is 0/1
The reciprocal of 1/1 is 1/1
Enter a y/n to test more fractions: n
 */