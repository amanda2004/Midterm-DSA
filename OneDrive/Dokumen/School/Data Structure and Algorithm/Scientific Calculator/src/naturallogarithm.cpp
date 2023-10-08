#include "naturallogarithm.h"
#include <iostream>
#define PI 3.141592654
#include <cmath>
#include <cstdlib>
using namespace std;

void naturallogarithm::start()
{
    double lnnum;
    cout << "Enter a number: ";
    cin >> lnnum;

    double lnval = log (lnnum);
    cout << "The ln of " << lnnum << " is " << lnval << "\n";
}
