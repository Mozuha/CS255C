/*
 * Apr 1, 2020
 * Mizuki Hashimoto
 * 7th edition p519-520 Ex11.10
 * Member-function definitions for Rational_Overload class
 */

#include "Rational_overload.h" // include definition of Rational_Overload class from rational_overload.h
#include <iostream>
using namespace std;

int Rational_Overload::gcd(int n, int d) { // gcd
  if(d == 0) return n;
  return gcd(d, n % d);
}

void Rational_Overload::reduce() { // reduce
  int d = gcd(num, den);
  num /= d;
  den /= d;
  if (den < 0) { // if denominator is negative
    num = -num; // set numerator to be negative
    den = -den; // set denominator to be positive (3/-6 -> -1/2)
  }
}

Rational_Overload::Rational_Overload() { num = 0; den = 1; } // constructor

Rational_Overload::Rational_Overload(int n, int d) { // constructor
  num = n;
  den = d;
  reduce();
}

void Rational_Overload::setValue(int n, int d) { // set numerator and denominator
  num = n;
  den = d;
  reduce();
}

void Rational_Overload::negate() { num = -num; } // negate only the numerator

void Rational_Overload::reciprocal() { // switch numerator and denominator
  int temp = num;
  num = den;
  den = temp;
  reduce();
}

Rational_Overload Rational_Overload::operator-() { // negation overloading
  Rational_Overload x = *this;
  x.negate();
  return x;
}

Rational_Overload Rational_Overload::operator!() { // reciprocal overloading
  Rational_Overload x = *this;
  x.reciprocal();
  return x;
}

void Rational_Overload::add(Rational_Overload r) { // addition
  int n = num * r.den + den * r.num;
  int d = den * r.den;
  setValue(n, d);
  // compute (ad+bc)/bd
}

void Rational_Overload::sub(Rational_Overload r) { // subtraction
  r.negate();
  add(r); // num * r.den + (den) * (-r.num)
}

void Rational_Overload::mul(Rational_Overload r) { // multiplication
  int n = num * r.num;
  int d = den * r.den;
  setValue(n, d);
}

void Rational_Overload::div(Rational_Overload r) { // division
  r.reciprocal();
  mul(r); // n = num * r.den; d = den * r.num
}

Rational_Overload Rational_Overload::operator+(Rational_Overload r) { // addition overloading
  Rational_Overload x = *this;
  x.add(r);
  return x;
}

Rational_Overload Rational_Overload::operator-(Rational_Overload r) { // subtraction overloading
  Rational_Overload x = *this;
  x.sub(r);
  return x;
}

Rational_Overload Rational_Overload::operator*(Rational_Overload r) { // multiplication overloading
  Rational_Overload x = *this;
  x.mul(r);
  return x;
}

Rational_Overload Rational_Overload::operator/(Rational_Overload r) { // division overloading
  Rational_Overload x = *this;
  x.div(r);
  return x;
}

bool Rational_Overload::operator<(Rational_Overload r) { // smaller than overloading
  return num * r.den < den * r.num;
}

bool Rational_Overload::operator<=(Rational_Overload r) { // smaller than or equal overloading
  return num * r.den <= den * r.num;
}

bool Rational_Overload::operator>(Rational_Overload r) { // greater than overloading
  return num * r.den > den * r.num;
}

bool Rational_Overload::operator>=(Rational_Overload r) { // greater than or equal overloading
  return num * r.den >= den * r.num;
}

bool Rational_Overload::operator==(Rational_Overload r) { // equal to overloading
  return num * r.den == den * r.num;
}

bool Rational_Overload::operator!=(Rational_Overload r) { // not equal to overloading
  return num * r.den != den * r.num;
}

void Rational_Overload::print() { cout << num << '/' << den; } // num/den format

void Rational_Overload::printf() { cout << (float)num / (float)den; } // d.dd format (decimal point)
