// Midterm project 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen
//Date: 10/10/2024

#include <iostream>

using namespace std;

int main() {
    int operation;
    double num1, num2, result;

    cout << "Choose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract " << endl;
    cout << "3. Multiply " << endl;
    cout << "4. Divide " << endl;
    cout << "5. Power " << endl;
    cout << "Enter the number of the operation: ";
    cin >> operation;


    cout << "Enter the first number: ";
    cin >> num1;


    if (operation == 5) {
        cout << "Enter the exponent: ";
        cin >> num2;
    }
    else {

        cout << "Enter the second number: ";
        cin >> num2;
    }


    if (operation == 1) {
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (operation == 2) {
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (operation == 3) {
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (operation == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "Error: Division by zero is undefined." << endl;
        }
    }
    else if (operation == 5) {

        result = 1.0;
        for (int i = 0; i < num2; ++i) {
            result *= num1;
        }
        cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
    }
    else {
        cout << "Invalid operation selected." << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
