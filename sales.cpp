/*
 Jan 26, 2020
 Mizuki Hashimoto
 7th edition p204 Ex5.14
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int code, quantity;
    const double product[] = {2.98, 4.50, 9.98, 4.49, 6.87};
    int num_product[] = {0, 0, 0, 0, 0};
    double total = 0.0;
    cout << fixed;

    while(true) {
        cout << "Enter the product code (1-5, 0 to stop): ";
        cin >> code;
        if (!(code >=1 and code <= 5))
            break;
        cout << "Quantity? ";
        cin >> quantity;

        switch(code) {
            case 1:
                cout << setprecision(2) << "Retail price for P1 = $" << product[code - 1] * quantity << endl;
                break;
            case 2:
                cout << setprecision(2) << "Retail price for P2 = $" << product[code - 1] * quantity << endl;
                break;
            case 3:
                cout << setprecision(2) << "Retail price for P3 = $" << product[code - 1] * quantity << endl;
                break;
            case 4:
                cout << setprecision(2) << "Retail price for P4 = $" << product[code - 1] * quantity << endl;
                break;
            case 5:
                cout << setprecision(2) << "Retail price for P5 = $" << product[code - 1] * quantity << endl;
                break;
        }
        total += product[code - 1] * quantity;
        num_product[code - 1] += quantity;
    }

    cout << "Product Quantities" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "  " << i + 1 << "  " << num_product[i] << endl;
    }
    cout << "Total sales = $" << total << endl;
}

/*
Enter the product code (1-5, 0 to stop): 2
Quantity? 10
Retail price for P2 = $45.00
Enter the product code (1-5, 0 to stop): 5
Quantity? 1
Retail price for P5 = $6.87
Enter the product code (1-5, 0 to stop): 3
Quantity? 5
Retail price for P3 = $49.90
Enter the product code (1-5, 0 to stop): 3
Quantity? 5
Retail price for P3 = $49.90
Enter the product code (1-5, 0 to stop): 0
Product Quantities
  1  0
  2  10
  3  10
  4  0
  5  1
Total sales = $151.67
 */
