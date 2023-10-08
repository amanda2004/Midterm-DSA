#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include "History.h"
#include "powerclass.h"
#define PI 3.141592654

void power::start(history_list& history)
{
    using namespace std;

    int base, exponent, result;

    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl << endl;

    string output = to_string(base) + " ^ " + to_string(exponent) + " = " + to_string(result);
    history.add_result(output);
}
