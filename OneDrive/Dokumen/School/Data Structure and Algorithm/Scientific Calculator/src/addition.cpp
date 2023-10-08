#include "addition.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void addition::start(history_list& history)
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

    //to store the result in calculator's history
    string output = to_string(num1) + " + " + to_string(num2) + " = " + to_string(result);
    history.add_result(output);
}
