#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "sqrt.h"
#include "History.h"

using namespace std;

void sqrtCalculator::start(history_list& history)
{
    // Allows user to store a number
    double sqrtnum;
    cout << "Enter a number: ";
    cin >> sqrtnum;

    // Counts the square root of the number
    double sqrtval = sqrt(sqrtnum);
    cout << "The square root of " << sqrtnum << " is " << sqrtval << "\n" << "\n";

    //to store the result in the calculator's history
    string output = "The square root of " + to_string(sqrtnum) + " is " + to_string(sqrtval);
    history.add_result(output);
}
