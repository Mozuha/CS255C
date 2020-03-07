/*
 Mar 6, 2020
 Mizuki Hashimoto
 7th edition p427 Ex9.6
 This is a program to test the function of Rational class.
 Receives two rational numbers from the user and perform addition, subtraction, multiplication, and division.
 For each operation, returns the value in num/den form and d.dd form (ex. 1/2 and 0.5)
 */

#include "rational.h" // include definition of Rational class from rational.h
#include <iostream>
using namespace std;

int main() {
  int n, d; // numerator, denominator
  Rational temp; // temporally variable for storing the original rational value
  char ans; // user answer for yes/no question

  do {
    cout << "Enter a rational number separating the numerator and denominator with a space: ";
    cin >> n >> d;
    Rational r(n, d); // instantiate object r of Rational class
    cout << "Enter another rational number: ";
    cin >> n >> d;
    Rational s(n, d); // instantiate object s of Rational class

    // addition num/den form
    temp = r;
    r.print();
    cout << " + ";
    s.print();
    cout << " = ";
    r.add(s);
    r.print();
    cout << endl;
    r = temp;

    // addition d.dd form
    temp = r;
    r.printf();
    cout << " + ";
    s.printf();
    cout << " = ";
    r.add(s);
    r.printf();
    cout << endl;
    r = temp;

    // subtraction num/den form
    temp = r;
    r.print();
    cout << " - ";
    s.print();
    cout << " = ";
    r.sub(s);
    r.print();
    cout << endl;
    r = temp;

    // subtraction d.dd form
    temp = r;
    r.printf();
    cout << " - ";
    s.printf();
    cout << " = ";
    r.sub(s);
    r.printf();
    cout << endl;
    r = temp;

    // multiplication num/den form
    temp = r;
    r.print();
    cout << " * ";
    s.print();
    cout << " = ";
    r.mul(s);
    r.print();
    cout << endl;
    r = temp;

    // multiplication d.dd form
    temp = r;
    r.printf();
    cout << " * ";
    s.printf();
    cout << " = ";
    r.mul(s);
    r.printf();
    cout << endl;
    r = temp;

    // division num/den form
    temp = r;
    r.print();
    cout << " / ";
    s.print();
    cout << " = ";
    r.div(s);
    r.print();
    cout << endl;
    r = temp;

    // division d.dd form
    temp = r;
    r.printf();
    cout << " / ";
    s.printf();
    cout << " = ";
    r.div(s);
    r.printf();
    cout << endl;
    r = temp;

    cout << "Would you like to enter new rational numbers? (y/n): ";
    cin >> ans;
  } while(ans == 'y'); // loop if user enter y
}

/*
Enter a rational number separating the numerator and denominator with a space: 2 4
Enter another rational number: 4 10
1/2 + 2/5 = 9/10
0.5 + 0.4 = 0.9
1/2 - 2/5 = 1/10
0.5 - 0.4 = 0.1
1/2 * 2/5 = 1/5
0.5 * 0.4 = 0.2
1/2 / 2/5 = 5/4
0.5 / 0.4 = 1.25
Would you like to enter new rational numbers? (y/n): y
Enter a rational number separating the numerator and denominator with a space: 0 -4
Enter another rational number: 5 -5
0/1 + -1/1 = -1/1
0 + -1 = -1
0/1 - -1/1 = 1/1
0 - -1 = 1
0/1 * -1/1 = 0/1
0 * -1 = 0
0/1 / -1/1 = 0/1
0 / -1 = 0
Would you like to enter new rational numbers? (y/n): n
 */
