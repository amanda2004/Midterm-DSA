#include "division.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void division::start(history_list& history)
{

using namespace std;

    double divide;
    double n;
    int numberitems;
    cout << "How many number you want to divide? ";
    cin >> numberitems;

    cout << "Enter number 1: " ;
    cin >> n;
    divide = n; // Store the first number in divide

    string output = to_string(n); // Start the output string with the first number

    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        divide /= n;
        output += " / " + to_string(n); // Add to the output string
    }

    output += " = " + to_string(divide); // Add the result to the output string
    cout << output << endl << endl;

    history.add_result(output);
}
