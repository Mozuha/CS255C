/*
 * Apr 1, 2020
 * Mizuki Hashimoto
 * 7th edition p519-520 Ex11.10
 * This is a header file for Rational_Overload class.
 * Contains prototypes for methods and variables of Rational_Overload class
 */

// prevent multiple inclusions of header file
#ifndef RATIONAL_OVERLOAD_H
#define RATIONAL_OVERLOAD_H

// Rational_Overload class definition
class Rational_Overload {
  private:
    int num, den; // numerator, denominator
    int gcd(int, int); // gcd
    void reduce(); // reduce the ratio to the simplest value (2/4 -> 1/2)

  public:
    Rational_Overload(); // constructor
    Rational_Overload(int, int); // constructor
    void setValue(int, int); // set numerator and denominator value
    int getNum(); // get numerator
    int getDen(); // get denominator

    void negate(); // negate the value
    void reciprocal(); // switch numerator and denominator
    Rational_Overload operator-(); // negation overloading
    Rational_Overload operator!(); // reciprocal overloading

    void add(Rational_Overload); // addition
    void sub(Rational_Overload); // subtraction
    void mul(Rational_Overload); // multiplication
    void div(Rational_Overload); // division
    Rational_Overload operator+(Rational_Overload); // addition overloading
    Rational_Overload operator-(Rational_Overload); // subtraction overloading
    Rational_Overload operator*(Rational_Overload); // multiplication overloading
    Rational_Overload operator/(Rational_Overload); // division overloading

    bool operator<(Rational_Overload); // smaller than overloading
    bool operator<=(Rational_Overload); // smaller than or equal overloading
    bool operator>(Rational_Overload); // greater than overloading
    bool operator>=(Rational_Overload); // greater than or equal overloading
    bool operator==(Rational_Overload); // equal to overloading
    bool operator!=(Rational_Overload); // not equal to overloading

    void print(); // print rational value in num/den form
    void printf(); // print rational value in d.dd form
};

#endif //RATIONAL_OVERLOAD_H
