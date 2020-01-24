 /*
 Jan 23, 2020
 Mizuki Hashimoto
 7th edition p65 Ex2.19
 This is a program that gets three integers inputs from the keyboard and prints the sum, average, product, smallest, and largest of these numbers.
 */

#include <iostream>
using namespace std;

int main() {
    int sum, prd, arr[3]; // sum, product, array
    sum = 0;
    prd = 1;

    cout << "Enter three integers." << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter an integer: ";
        cin >> arr[i]; // input an integer
        sum += arr[i]; // calculate sum
        prd *= arr[i]; // calculate product
    }

    cout << "Sum is " << sum << endl;
    cout << "Average is " << sum / 3.0 << endl; // average. divide by 3.0 to get double value
    cout << "Product is " << prd << endl;
    cout << "Smallest is " << min(min(arr[0], arr[1]), arr[2]) << endl; // min function to get the smallest value
    cout << "Largest is " << max(max(arr[0], arr[1]), arr[2]) << endl; // max function to get the largest value
}
