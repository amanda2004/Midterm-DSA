#include "substraction.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void substraction::start(history_list& history)
{

using namespace std;

    double sub;
    double n;
    int numberitems;
    cout << "How many number you want to substract? ";
    cin >> numberitems;

    cout << "Enter number 1: " ;
    cin >> n;
    sub = n; // Store the first number in sub

    string output = to_string(n); // Start the output string with the first number

    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        sub -= n;
        output += " - " + to_string(n); // Add to the output string
    }

    output += " = " + to_string(sub); // Add the result to the output string
    cout << output << endl << endl;

    history.add_result(output);
}
