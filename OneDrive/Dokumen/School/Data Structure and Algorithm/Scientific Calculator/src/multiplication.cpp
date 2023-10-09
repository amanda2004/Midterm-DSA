#include "multiplication.h"
#include "History.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void multiplication ::start(history_list& history)
{

using namespace std;

    double multiply;
    double n;
    int numberitems;
    cout << "How many number you want to multiply? ";
    cin >> numberitems;

    cout << "Enter number 1: " ;
    cin >> n;
    multiply = n; // Store the first number in multiply

    string output = to_string(n); // Start the output string with the first number

    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        multiply *= n;
        output += " x " + to_string(n); // Add to the output string
    }

    output += " = " + to_string(multiply); // Add the result to the output string
    cout << output << endl << endl;

    history.add_result(output);
}
