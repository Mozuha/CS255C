 /*
 Jan 23, 2020
 Mizuki Hashimoto
 7th edition p66 Ex2.28
 This is a program that gets a five digit integer, separates the integer into its digits and prints them separated by three spaces each.
 */

#include <iostream>
#include <stack> // allows program to use stack
using namespace std;

int main() {
    int num, digit; // number, digit
    stack<int> st;  // stack

    cout << "Enter a five digits integer: ";
    cin >> num;

    while (num > 0) { // split an integer into digits and push each digit into the stack
        digit = num % 10;
        num /= 10;
        st.push(digit); // push a digit
    }

    while (!st.empty()) { // print the digits in the same order as an integer
        cout << st.top() << "   "; // print a digit with three spaces
        st.pop(); // pop a digit
    }
}