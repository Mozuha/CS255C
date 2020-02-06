/*
 Jan 26, 2020
 Mizuki Hashimoto
 7th edition p204 Ex5.21
 This is the program returns the appropriate calculated payroll for different types of employees (Manager, Hourly, Commission, Piecework)
 with appropriate inputs.
 */

#include <iostream>
using namespace std;

int main() {
    int code;
    double weekly_salary, hours, hourly_wage, overtime, pay2, gross_sales, base_pay, pay3, num_items, pay_per_item, pay4;

    while (true) {
        cout << "Enter one of the following employee number codes to begin\n"
                      "Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0" << endl;
        cin >> code;
        if (code == 0)
            break;

        switch(code) {
            case 1:
                cout << "Enter the weekly salary of a manager" << endl;
                cin >> weekly_salary;
                cout << "The weekly salary of a manager is $" << weekly_salary << endl;
                break;
            case 2:
                cout << "Enter the number of hours logged by the employee" << endl;
                cin >> hours;
                cout << "Enter the hourly wage of the employee" << endl;
                cin >> hourly_wage;
                pay2 = hours * hourly_wage;
                if (hours > 40) {
                    overtime = hours - 40;
                    pay2 = ((hours - overtime) * hourly_wage) + (overtime * hourly_wage * 1.5);
                }
                cout << "The weekly wage of the hourly employee is $" << pay2 << endl;
                break;
            case 3:
                cout << "Enter the gross sales of the commission worker" << endl;
                cin >> gross_sales;
                cout << "Enter the base pay for the commission worker" << endl;
                cin >> base_pay;
                pay3 = base_pay + (gross_sales * 0.057);
                cout << "The weekly pay of the commission worker is $" << pay3 << endl;
                break;
            case 4:
                cout << "Please enter the number of items produced by the employee this week" << endl;
                cin >> num_items;
                cout << "Please enter the employee's pay per item" << endl;
                cin >> pay_per_item;
                pay4 = num_items * pay_per_item;
                cout << "The weekly pay for the piecework worker is $" << pay4 << endl;
                break;
            default:
                cout << "Invalid input. Enter 1-4, or 0 to exit." << endl;
                break;
        }
    }
}

/*
Enter one of the following employee number codes to begin
Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0
1
Enter the weekly salary of a manager
1500
The weekly salary of a manager is $1500
Enter one of the following employee number codes to begin
Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0
2
Enter the number of hours logged by the employee
50
Enter the hourly wage of the employee
20
The weekly wage of the hourly employee is $1100
Enter one of the following employee number codes to begin
Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0
2
Enter the number of hours logged by the employee
20
Enter the hourly wage of the employee
20
The weekly wage of the hourly employee is $400
Enter one of the following employee number codes to begin
Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0
3
Enter the gross sales of the commission worker
100000
Enter the base pay for the commission worker
250
The weekly pay of the commission worker is $5950
Enter one of the following employee number codes to begin
Codes: Manager = 1, Hourly = 2, Commission = 3, Piecework = 4, Exit Function = 0
4
Please enter the number of items produced by the employee this week
1000
Please enter the employee's pay per item
2
The weekly pay for the piecework worker is $2000
 */