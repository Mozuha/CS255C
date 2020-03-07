/*
 Mar 6, 2020
 Mizuki Hashimoto
 7th edition p427 Ex9.6
 Member-function definitions for Rational class
 */

#include "rational.h" // include definition of Rational class from rational.h
#include <iostream>
using namespace std;

int Rational::gcd(int n, int d) { // gcd
  if(d == 0) return n;
  return gcd(d, n % d);
}

int Rational::reduce() { // reduce
  int d = gcd(num, den);
  num /= d;
  den /= d;
}

Rational::Rational() { num = 0; den = 1; } // constructor

Rational::Rational(int n, int d) { // constructor
  num = n;
  den = d;
  reduce();
}

void Rational::setValue(int n, int d) { // set numerator and denominator
  num = n;
  den = d;
  reduce();
}

void Rational::negate() { num = -num; } // negate only the numerator

void Rational::reciprocal() { // switch numerator and denominator
  int temp = num;
  num = den;
  den = temp;
}

void Rational::add(Rational r) { // addition
  int n = num * r.den + den * r.num;
  int d = den * r.den;
  setValue(n, d);
  // compute (ad+bc)/bd
}

void Rational::sub(Rational r) { // subtraction
  r.negate();
  add(r); // num * r.den + (den) * (-r.num)
}

void Rational::mul(Rational r) { // multiplication
  int n = num * r.num;
  int d = den * r.den;
  setValue(n, d);
}

void Rational::div(Rational r) { // division
  r.reciprocal();
  mul(r); // n = num * r.den; d = den * r.num
}

void Rational::print() { cout << num << '/' << den; } // num/den format

void Rational::printf() {cout << (float)num / (float)den;} // d.dd format (decimal point)
