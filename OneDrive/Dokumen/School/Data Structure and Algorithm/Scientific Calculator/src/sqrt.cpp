#include <iostream>
#include <cmath>
#define PI 3.141592654
#include <cstdlib>
#include <sqrt.h>
using namespace std;

int main()
{
    double sqrtnum;
    cout << "Enter a number: ";
    cin >> sqrtnum;

    double sqrtval = sqrt(sqrtnum);
    cout << "The square root of " << sqrtnum << " is " << sqrtval << "\n";

}
