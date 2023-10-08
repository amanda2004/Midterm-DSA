#include "addition.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

void addition::start()
{

using namespace std;

    double num1, num2, result;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform addition
    result = num1 + num2;

    // Display the result
    cout << "The sum is: " << result << endl;
}
