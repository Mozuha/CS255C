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
    double pi = 0, temp = 0, prevtemp = 1, i = 1; // pi as a term, temp as temp of terms, prevtemp as previous temp, i as denominator
    double delta = 1.0 / pow(10, digit); // threshold
    while (abs(temp - prevtemp) >= delta) { // loop until absolute difference of (temp - prevtemp) will be less than threshold
        pi = 4 / i; // a term
        if (term % 2 == 0) { // even term
            prevtemp = temp; // escape temp value into prevtemp before add a term into temp
            temp += pi; // add a term into temp
        } else { // odd term
            prevtemp = temp; // escape temp value into prevtemp before subtract a term from temp
            temp -= pi; // subtract a term from temp
        }
        i += 2; // increase denominator by two
        term++; // increment term
        if (term > 10) {
            continue;
        }
        cout << "Approximation " << term << ": " << temp << endl; // Print this line only till the 10th term
    }
    cout << "Pi to " << digit << " significant digits is " << temp << endl;
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

/*
Type the number of digits of pi you would like or 0 to exit: 3
Approximation 1: 4
Approximation 2: 2.66667
Approximation 3: 3.46667
Approximation 4: 2.89524
Approximation 5: 3.33968
Approximation 6: 2.97605
Approximation 7: 3.28374
Approximation 8: 3.01707
Approximation 9: 3.25237
Approximation 10: 3.04184
Pi to 3 significant digits is 3.14209
Number of terms in the approximation: 2001

Type the number of digits of pi you would like or 0 to exit: 5
Approximation 1: 4
Approximation 2: 2.66667
Approximation 3: 3.46667
Approximation 4: 2.89524
Approximation 5: 3.33968
Approximation 6: 2.97605
Approximation 7: 3.28374
Approximation 8: 3.01707
Approximation 9: 3.25237
Approximation 10: 3.04184
Pi to 5 significant digits is 3.1416
Number of terms in the approximation: 200001
 */
