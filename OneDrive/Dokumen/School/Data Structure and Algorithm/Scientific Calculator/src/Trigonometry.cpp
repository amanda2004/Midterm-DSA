#include "Trigonometry.h"
#include <cmath>
#include <iostream>
#define PI 3.141592654

using namespace std;

void Trigonometry::start()
{
    do {
        cout << "Press 1 for Sin" << endl;
        cout << "Press 2 for Cos" << endl;
        cout << "Press 3 for Tan" << endl;
        cin >> selected;

        switch (selected)
        {
        case '1':
            calculateSine();
            break;

        case '2':
            calculateCosine();
            break;

        case '3':
            calculateTangent();
            break;

        case '0':
            return;
            break;

        default:
            cout << "Invalid input" << endl;
        }
    } while (selected != '0');
}

void Trigonometry::calculateSine()
{
    double x, result;
        cout << "Enter number (in degrees):";
        cin >> x;

    result = sin(x * PI / 180.0);
    cout << "Sin(x) = " << result << " radians" << endl;
    cout << "Sin(x) = " << result * 180 / PI << " degrees" << endl << endl;
}

void Trigonometry::calculateCosine()
{
    double x, result;
        cout << "Enter number (in degrees):";
        cin >> x;

    result = cos(x * PI / 180.0);
    cout << "Cos(x) = " << result << " radians" << endl;
    cout << "Cos(x) = " << result * 180 / PI << " degrees" << endl << endl;
}

void Trigonometry::calculateTangent()
{
    double x, result;
        cout << "Enter number (in degrees):";
        cin >> x;

    result = tan(x * PI / 180.0);
    cout << "Tan(x) = " << result << "radians" << endl;
    cout << "Tan(x) = " << result * 180 / PI << "degrees" << endl << endl;
}





