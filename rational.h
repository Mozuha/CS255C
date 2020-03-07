/*
 Mar 6, 2020
 Mizuki Hashimoto
 7th edition p427 Ex9.6
 This is a header file for Rational class.
 Contains prototypes for methods and variables of Rational class
 */

// prevent multiple inclusions of header file
#ifndef RATIONAL_H
#define RATIONAL_H

// Rational class definition
class Rational {
  private:
      int num, den; // numerator, denominator
      int gcd(int, int);  // gcd
      int reduce(); // reduce the ratio to the simplest value (2/4 -> 1/2)

  public:
      Rational(); // constructor
      Rational(int, int); // constructor
      void setValue(int, int); // set numerator and denominator value
      void negate(); // negate the value
      void reciprocal(); // switch numerator and denominator
      void add(Rational); // addition
      void sub(Rational); // subtraction
      void mul(Rational); // multiplication
      void div(Rational); // division
      void print(); // print rational value in num/den form
      void printf(); // print rational value in d.dd form
};

#endif //RATIONAL_H
