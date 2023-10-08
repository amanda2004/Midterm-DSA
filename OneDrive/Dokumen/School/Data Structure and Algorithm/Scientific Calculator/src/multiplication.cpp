#include "multiplication.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void multiplication ::start(history_list& history)
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

    //to store the result in the calculator's history
    string output = to_string(num1) + " * " + to_string(num2) + " = " + to_string(result);
    history.add_result(output);
}
