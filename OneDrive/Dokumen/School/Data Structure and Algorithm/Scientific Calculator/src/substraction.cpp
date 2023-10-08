#include "substraction.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

void substraction::start()
{

using namespace std;

    double num1, num2, result;

    // Input the numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform subtraction
    result = num1 - num2;

    // Display the result
    cout << "Result: " << result << endl;
}
