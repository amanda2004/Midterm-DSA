#include <iostream>
#include "LogCustomBase.h"
#include <cmath>
#include <cstdlib>
using namespace std;

void LogCustomBase::start() 
{

  // Declaring the base and value as double
  double base, value;

  // Asking the user to input both base of the logarithm and the value that will be stored to base & value
  cout << "Enter base number: ";
  cin >> base;
  cout << "Enter number: ";
  cin >> value;

  // Declaring logcustom as the result of the user input
  double logcustom = log(value) / log(base);
  cout << "The value of " << value << " with the base of " << base << " is " << logcustom;

}
