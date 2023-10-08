#include "Trigonometry.h"
#include "History.h"
#include <string>
#include <cmath>
#include <iostream>
#define PI 3.141592654

using namespace std;

void Trigonometry::start(history_list& history)
{
    do {
        cout << "Press 0 for back to main calculator" << endl;
        cout << "Press 1 for Sin" << endl;
        cout << "Press 2 for Cos" << endl;
        cout << "Press 3 for Tan" << endl;
        cin >> selected;

        switch (selected)
        {
        case '1':
            calculateSine(history);
            break;

        case '2':
            calculateCosine(history);
            break;

        case '3':
            calculateTangent(history);
            break;

        case '0':
            return;
            break;

        default:
            cout << "Invalid input" << endl;
        }
    } while (selected != '0');
}

void Trigonometry::calculateSine(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    result = sin(x * PI / 180.0);
    cout << "Sin(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Sin(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}

void Trigonometry::calculateCosine(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    result = cos(x * PI / 180.0);
    cout << "Cos(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Cos(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}

void Trigonometry::calculateTangent(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    result = tan(x * PI / 180.0);
    cout << "Tan(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Tan(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}





