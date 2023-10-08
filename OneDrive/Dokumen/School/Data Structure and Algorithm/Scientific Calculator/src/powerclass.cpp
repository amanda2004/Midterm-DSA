#include "powerclass.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

void power::start()
{

using namespace std;

    double base, exponent, result;

    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << base << " ^ " << exponent << " = " << result << endl << endl;

}
