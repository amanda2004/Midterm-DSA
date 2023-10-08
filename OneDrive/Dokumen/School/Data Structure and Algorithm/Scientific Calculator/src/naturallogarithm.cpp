#include "naturallogarithm.h"
#include "History.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void naturallogarithm::start(history_list& history)
{
    double lnnum;
    cout << "Enter a number: ";
    cin >> lnnum;

    double lnval = log (lnnum);
    cout << "The ln of " << lnnum << " is " << lnval << "\n";

    //to store the result in the calculator's history
    string output = "The ln of " + to_string(lnnum) + " is " + to_string(lnval);
    history.add_result(output);
}
