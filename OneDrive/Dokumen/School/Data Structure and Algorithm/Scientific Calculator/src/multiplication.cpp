#include "multiplication.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

void multiplication ::start()
{

using namespace std;

   double num1, num2, result;

    // Input
    cout << "Enter the first number: ";
    std::cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculation
    result = num1 * num2;

    // Output
    cout << "Result: " << result << endl;
}
