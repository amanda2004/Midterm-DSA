#include "division.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void division::start(history_list& history)
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
        cout << "Result of division: " << result << endl << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl << endl;
    }

    //to store the result in the calculator's history
    string output = to_string(num1) + " / " + to_string(num2) + " = " + to_string(result);
    history.add_result(output);
}
