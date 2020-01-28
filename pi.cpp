/*
 Jan 26, 2020
 Mizuki Hashimoto
 7th edition p204 Ex5.19
 This is the program estimates pi value with Gregory-Leibniz series. The threshold of the series is calculated by (1.0/10^d)
 where d is the number of digits of pi entered by the user. The series will be terminated at the point where the absolute
 difference of two successive estimations becomes less than the threshold value. It will only show the first to the tenth
 estimation.
 */

#include <iostream>
#include <cmath>
using namespace std;

double Calculate (int digit) {
    int term = 0; // number of terms, also work as a counter
    double pi = 0, sum = 0, prevsum = 1, i = 1; // pi as a term, sum as sum of terms, prevsum as previous sum, i as denominator
    double delta = 1.0 / pow(10, digit); // threshold
    while (abs(sum - prevsum) >= delta) { // loop until absolute difference of (sum - prevsum) will be less than threshold
        pi = 4 / i; // a term
        if (term % 2 == 0) { // even term
            prevsum = sum; // escape sum value into prevsum before add a term into sum
            sum += pi; // add a term into sum
        } else { // odd term
            prevsum = sum; // escape sum value into prevsum before subtract a term from sum
            sum -= pi; // subtract a term from sum
        }
        i += 2; // increase denominator by two
        term++; // increment term
        if (term > 10) {
            continue;
        }
        cout << "Approximation " << term << ": " << sum << endl; // Print this line only till the 10th term
    }
    cout << "Pi to " << digit << " significant digits is " << sum << endl;
    cout << "Number of terms in the approximation: " << term << "\n" << endl;
}

int main() {
    int digit; // number of digits of pi
    while (true) { // loop until the user enter 0
        cout << "Type the number of digits of pi you would like or 0 to exit: ";
        cin >> digit;
        if (digit > 0) { // positive integer
            Calculate(digit); // execute the Calculate function
        } else if (digit < 0) { // negative integer
            cout << "Error. Please enter the positive integer." << endl;
        } else { // entered 0
            cout << "exit";
            break; // break the loop
        }
    }
}