// WIKTOR SZYCHOWSKI 164171
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

void provideDigits(double& x, double& y);
double power(double& x, double& y);
void calculator();

int main() {

    calculator();

    return 0;
}

void calculator() {
    double x, y, result;
    char choice;

    cout << "Welcome to a simple calculator. Choose an operation using a symbol." << endl;
    cout << "+ (add), - (substract), * (multiplication), / (division) , ^ (power) , s (square root)" << endl;
    cout << "Which operation do you choose?: ";
    cin >> choice;
    cout << endl;


    switch (choice) {
    case '+':
        provideDigits(x, y);
        result = x + y;

        cout << "The result is: " << result << endl;
        break;

    case '-':
        provideDigits(x, y);
        result = x - y;

        cout << "The result is: " << result << endl;
        break;


    case '*':
        provideDigits(x, y);
        result = x * y;

        cout << "The result is: " << result << endl;
        break;


    case '/':
        provideDigits(x, y);
        if (y == 0) {
            cout << "cannot be divided by 0" << endl;
            break;

        }
        else {
            result = x / y;
            cout << "The result is: " << result << endl;
        }
        break;

    case '^':
        provideDigits(x, y);
        result = power(x, y);
        cout << "The result is: " << result << endl;
        break;



    case 's':
        cout << "Enter a digit: ";
        cin >> x;
        if (x < 0) {
            cout << "You cannot take the square root of a negative number.";
        }
        else {
            result = sqrt(x);
            cout << "The result is: " << result << endl;
        }
        break;


    default:
        cout << "No such option exists. Please enter the right symbol." << endl;
        calculator();
    }

    do {
        cout << "Press Q if you want to quit." << endl;
        cout << "Press C if you want to continue." << endl;
        cout << ">> ";
        cin >> choice;


    } while (not(toupper(choice) == 'Q') && not(toupper(choice) == 'C'));
    if (toupper(choice) == 'Q') {
        return;
    }
    else {
        calculator();
    }
}
void provideDigits(double& x, double& y) {
    while (true) {
        cout << "Give your first Digit: ";
        if (cin >> x) { 
            cout << "Give your second Digit: ";
            if (cin >> y) {
                break; 
            }
        }

      
        cout << "Error: Please enter valid numbers!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

double power(double& x, double& y) {
    double result = 1;
    if (y == 0.0) {
        return 1;
    }
    else {
        for (double i = 0; i < y; i++) {
            result *= x;
        }
    }
    return result;
}
