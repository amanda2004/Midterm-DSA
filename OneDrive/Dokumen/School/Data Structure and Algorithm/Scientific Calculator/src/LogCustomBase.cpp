#include <iostream>
#include "LogCustomBase.h"
#include "History.h"
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void LogCustomBase::start(history_list& history) 
{
    double base, value;
    // Allows the user to enter a base for the logarithm and a number
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter number: ";
    cin >> value;

    // Counts the number that the user inputted earlier using the formula stated below
    double logcustom = log(value) / log(base);
    cout << "The value of " << value << " with the base of " << base << " is " << logcustom << "\n" << "\n";

    //to store the result in the calculator's history
    string output = "The value of " + to_string(value) + " with the base of " + to_string(base) + " is " + to_string(logcustom);
    history.add_result(output);
}
