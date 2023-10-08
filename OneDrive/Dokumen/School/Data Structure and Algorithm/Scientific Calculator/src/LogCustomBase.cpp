#include <iostream>
#include "LogCustomBase.h"
#include <cmath>
#include <cstdlib>
using namespace std;

void LogCustomBase::start() 
{

  double base, value;

  cout << "Enter base number: ";
  cin >> base;
  cout << "Enter number: ";
  cin >> value;
  
  double logcustom = log(value) / log(base);
  cout << "The value of " << value << " with the base of " << base << " is " << logcustom;

}
