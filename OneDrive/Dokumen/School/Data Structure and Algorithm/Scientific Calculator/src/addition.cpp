#include "addition.h" //Include the declaration of the 'addition' class
#include "History.h" //Include the declaration of the 'history_list' class
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

void addition::start(history_list& history)
{

using namespace std;

    double add;
    double n;
    int numberitems;
    cout << "How many number you want to add? ";
    cin >> numberitems;

    cout << "Enter number 1: " ;
    cin >> n;
    add = n; // Store the first number in add

    string output = to_string(n); // Start the output string with the first number

    for(int i=2; i<=numberitems; i++)
    {
        cout << "Enter number " << i << ": " ;
        cin >> n;
        add += n;
        output += " + " + to_string(n); // Add to the output string
    }

    output += " = " + to_string(add); // Add the result to the output string
    cout << output << endl << endl; //Display the result

    //Add the entire operation and result to the calculator's history
    history.add_result(output);
}
