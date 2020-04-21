/*
 * Apr 21, 2020
 * Mizuki Hashimoto
 * This is a program to test the function of Rational_Overload class with exception handling
 * by ZeroDenomException class.
 * Receives two rational numbers a and b from the user and perform c=a+b, c=a-b, c=a*b, c=a/b, c=(a-b)/(a+b), c=-a,
 * and c=!b with overloading.
 * For each operation, returns the value in num/den form and d.dd form.
 * Also compares a and b by relational operators.
 * Print an error message in the case of denominator of rational number to be zero.
 */

#include <iostream>
#include "Rational_overload.h" // include definition of Rational_Overload class from Rational_overload.h
#include "ZeroDenomException.h" // include definition of ZeroDenomException class from ZeroDenomException.h
using namespace std;

// equation print format
void printEquation(Rational_Overload c, char sign) {
  if (sign == '+' || sign == '-' || sign == '*')
    cout << "a" << sign << "b is:" << endl;
  c.print(); // num/den form
  cout << endl;
  c.printf(); // d.dd form
  cout << endl;
}

// compare result message format
void printRelMessage(Rational_Overload a, Rational_Overload b, const string& message) {
  a.print();
  cout << message;
  b.print();
  cout << endl;
}

int main() {
  int n = 0, d = 0; // numerator, denominator
  Rational_Overload c; // instantiate object c of Rational_Overload class
  char ans; // user answer for yes/no question

  do {
    cout << "Enter information for Rational a" << endl;
    cout << "Enter numerator: ";
    cin >> n;
    do {
      try {
        cout << "Enter denominator: ";
        cin >> d;
        if (d == 0)
          throw ZeroDenomException(); // throw exception if inputted denominator is zero
      } catch (ZeroDenomException &zeroDenomException) {
        cout << "Cannot set denominator to be 0. Please try again" << endl; // print error message if caught exception
      }
    } while (d == 0); // loop until user enter non-zero denominator
    Rational_Overload a(n, d); // instantiate object a of Rational_Overload class

    cout << "Enter information for Rational b" << endl;
    cout << "Enter numerator: ";
    cin >> n;
    do {
      try {
        cout << "Enter denominator: ";
        cin >> d;
        if (d == 0)
          throw ZeroDenomException(); // throw exception if inputted denominator is zero
      } catch (ZeroDenomException &zeroDenomException) {
        cout << "Cannot set denominator to be 0. Please try again" << endl; // print error message if caught exception
      }
    } while (d == 0); // loop until user enter non-zero denominator
    Rational_Overload b(n, d); // instantiate object b of Rational_Overload class

    cout << "a is ";
    a.print();
    cout << endl;
    cout << "b is ";
    b.print();
    cout << endl;

    // addition
    c = a + b;
    printEquation(c, '+');

    // subtraction
    c = a - b;
    printEquation(c, '-');

    // multiplication
    c = a * b;
    printEquation(c, '*');

    // division
    try {
      cout << "a/b is:" << endl;
      if (a.getDen() == 0 || b.getNum() == 0)
        throw ZeroDenomException(); // throw exception if denominator after operation to be zero
      c = a / b;
      printEquation(c, '/');
    } catch (ZeroDenomException &zeroDenomException) {
      cout << "Division results in denominator of 0." << endl; // print error message if caught exception
    }

    try {
      cout << "(a+b)/(a-b) is:" << endl;
      if ((a+b).getDen() == 0 || (a-b).getNum() == 0)
        throw ZeroDenomException(); // throw exception if denominator after operation to be zero
      c = (a - b) / (a + b);
      c.print();
      cout << endl;
      c.printf();
      cout << endl;
    } catch (ZeroDenomException &zeroDenomException) {
      cout << "Operation results in denominator of 0." << endl; // print error message if caught exception
    }

    // negation
    cout << "-a is:" << endl;
    c = -a;
    c.print();
    cout << endl;
    c.printf();
    cout << endl;

    // reciprocal
    try {
      cout << "!b (reciprocal of b) is:" << endl;
      if (b.getNum() == 0)
        throw ZeroDenomException(); // throw exception if denominator after operation to be zero
      c = !b;
      c.print();
      cout << endl;
      c.printf();
      cout << endl;
    } catch (ZeroDenomException &zeroDenomException) {
      cout << "Operation results in denominator of 0." << endl; // print error message if caught exception
    }

    // smaller
    if (a < b) {
      printRelMessage(a, b, " is less than ");
    } else {
      printRelMessage(a, b, " is not less than ");
    }

    // smaller or equal
    if (a <= b) {
      printRelMessage(a, b, " is less than or equal to ");
    } else {
      printRelMessage(a, b, " is not less than or equal to ");
    }

    // greater
    if (a > b) {
      printRelMessage(a, b, " is greater than ");
    } else {
      printRelMessage(a, b, " is not greater than ");
    }

    // greater or equal
    if (a >= b) {
      printRelMessage(a, b, " is greater than or equal to ");
    } else {
      printRelMessage(a, b, " is not greater than or equal to ");
    }

    // equal
    if (a == b) {
      printRelMessage(a, b, " is equal to ");
    } else {
      printRelMessage(a, b, " is not equal to ");
    }

    // not equal
    if (a != b) {
      printRelMessage(a, b, " is unequal to ");
    } else {
      printRelMessage(a, b, " is not unequal to ");
    }

    cout << "Would you like to do another calculation? (y/n): ";
    cin >> ans;
  } while (ans == 'y'); // loop if user enter y
}

/*
--------------output---------------
Enter information for Rational a
Enter numerator: 0
Enter denominator: 0
Cannot set denominator to be 0. Please try again
Enter denominator: 1
Enter information for Rational b
Enter numerator: 0
Enter denominator: 0
Cannot set denominator to be 0. Please try again
Enter denominator: 1
a is 0/1
b is 0/1
a+b is:
0/1
0
a-b is:
0/1
0
a*b is:
0/1
0
a/b is:
Division results in denominator of 0.
(a+b)/(a-b) is:
Operation results in denominator of 0.
-a is:
0/1
0
!b (reciprocal of b) is:
Operation results in denominator of 0.
0/1 is not less than 0/1
0/1 is less than or equal to 0/1
0/1 is not greater than 0/1
0/1 is greater than or equal to 0/1
0/1 is equal to 0/1
0/1 is not unequal to 0/1
Would you like to do another calculation? (y/n): n
 */