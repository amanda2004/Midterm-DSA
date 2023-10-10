#include <iostream>
#include "LogCustomBase.h" //Include the declaration of the LogCustomBase class
#include "History.h" //Include the declaration of the history_list class
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

//Define the start function of the LogCustomBase class, which calculates logarithms with a custom base.
void LogCustomBase::start(history_list& history) 
{
    double base, value; //Declare variables to store the base and value

    cout << "Enter base number: ";
    cin >> base; //Prompt the user to enter the base number
    cout << "Enter number: ";
    cin >> value; //Prompt the user to enter the number for which the logarithms will be calculated

    //Calculate the logarithm with the custom base using the formula log(value) / log(base)
    double logcustom = log(value) / log(base);

    //Display the result to the user
    cout << "The value of " << value << " with the base of " << base << " is " << logcustom << "\n" << "\n";

    //to store the result in the calculator's history
    string output = "The value of " + to_string(value) + " with the base of " + to_string(base) + " is " + to_string(logcustom);
    history.add_result(output);
}
