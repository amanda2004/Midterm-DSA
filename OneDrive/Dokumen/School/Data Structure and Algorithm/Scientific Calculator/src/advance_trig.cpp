#include "advance_trig.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#define PI 3.141592654

using namespace std;

void advance_trig::start()
{
    do {
        cout << "Press 1 for arccos" << endl;
        cout << "Press 2 for arcsin" << endl;
        cout << "Press 3 for arctan" << endl;
        cout << "Select a Function (or press 0 to exit): ";
        cin >> selected;

        switch (selected) {
            case '1':
                arccos();
                break;

            case '2':
                arcsin();
                break;

            case '3':
                arctan();
                break;

            case '0':
                return;
                break;

            default:
                cout << "Invalid input" << endl;
            }
        } while (selected != '0');
}

void advance_trig::arccos(){
    double x, result;
        cout << "Enter your number in the range [-1, 1]: ";
        cin >> x;

        result = acos(x);
        cout << "acos(x) = " << result << " radians" << endl;
        cout << "acos(x) = " << result * 180 / PI << " degrees" << endl << endl;
}

void advance_trig::arcsin(){
    double x, result;
        cout << "Enter your number in the range [-1, 1]: ";
        cin >> x;

        result = asin(x);
        cout << "asin(x) = " << result << " radians" << endl;
        cout << "asin(x) = " << result * 180 / PI << " degrees" << endl << endl;
}

void advance_trig::arctan(){
    double x, result;
        cout << "Enter your number (all real numbers): ";
        cin >> x;

        result = atan(x);
        cout << "atan(x) = " << result << " radians" << endl;
        cout << "atan(x) = " << result * 180 / PI << " degrees" << endl << endl;
    }
