#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include "History.h"
#include "powerclass.h"

void power::start(history_list& history)
{
    using namespace std;

    double base, exponent, result;

    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl << endl;

    //to store the result in the calculator's history
    string output = to_string(base) + " ^ " + to_string(exponent) + " = " + to_string(result);
    history.add_result(output);
}
