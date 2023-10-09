#include "naturallogarithm.h"
#include "History.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void naturallogarithm::start(history_list& history)
{
    // Prompts the user to input a number which we will find the natural logarithm of
    double lnnum;
    cout << "Enter a number: ";
    cin >> lnnum;

    // Counts the ln value of the number using the C++ library
    double lnval = log (lnnum);
    cout << "The ln of " << lnnum << " is " << lnval << "\n" << "\n";

    //to store the result in the calculator's history
    string output = "The ln of " + to_string(lnnum) + " is " + to_string(lnval);
    history.add_result(output);
}
