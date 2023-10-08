#include "division.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

void division::start()
{

using namespace std;

    double num1, num2, result;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Check if the second number is not zero to avoid division by zero
    if (num2 != 0) {
        result = num1 / num2;
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
