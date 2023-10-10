#include "multiplication.h" //Include the header file for the 'multiplication' class
#include "History.h" //Include the header file for the 'history_list' class
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

//Define the 'start' function of the 'multiplication' class
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

    //Loop to read and multiply additional numbers
    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        multiply *= n;
        output += " x " + to_string(n); // Add the number and multiplication symbol to the output string
    }

    output += " = " + to_string(multiply); // Add the result to the output string
    cout << output << endl << endl; //Display the result

    //Add the result string to the 'history' object
    history.add_result(output);
}
