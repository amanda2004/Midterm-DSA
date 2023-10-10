#include "substraction.h" //Include the header file for 'substraction' class
#include "History.h" //Include the header file for 'history_list' class
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

//Define the 'start' function of the 'substraction' class
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

    //Loop to read and subtract additional numbers
    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        sub -= n;
        output += " - " + to_string(n); // Add the number and subtraction symbol to the output string
    }

    output += " = " + to_string(sub); // Add the result to the output string
    cout << output << endl << endl; //Display the result

    //Add the result string to the calculator's history
    history.add_result(output);
}
