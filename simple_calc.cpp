#include <iostream>
#include <iomanip> // For better formatting
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cout << "!! Division by Zero Error !!" << endl;
            return 0; // Return 0 as a default value
        } else {
            return a / b;
        }
    }

    void menu() {
        cout << "\n======================================" << endl;
        cout << "          SIMPLE CALCULATOR           " << endl;
        cout << "======================================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "======================================" << endl;
        cout << "Enter your choice (1-5): ";
    }
};

int main() {
    Calculator calc;
    int choice = 0;

    cout << "\n<<<<<<<<<< WELCOME TO THE CALCULATOR >>>>>>>>>>>>\n" << endl;

    while (choice != 5) {
        calc.menu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            float a, b;
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;

            cout << "\n------------------- RESULT -------------------" << endl;
            switch (choice) {
                case 1:
                    cout << setw(10) << a << " + " << b << " = " << calc.add(a, b) << endl;
                    break;
                case 2:
                    cout << setw(10) << a << " - " << b << " = " << calc.subtract(a, b) << endl;
                    break;
                case 3:
                    cout << setw(10) << a << " * " << b << " = " << calc.multiply(a, b) << endl;
                    break;
                case 4:
                    cout << setw(10) << a << " / " << b << " = " << calc.divide(a, b) << endl;
                    break;
            }
            cout << "----------------------------------------------\n";
        } else if (choice == 5) {
            cout << "\n>>>>>>>>>>> THANK YOU FOR USING THE CALCULATOR! <<<<<<<<<<<" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
