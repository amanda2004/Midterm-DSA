#include "advance_trig.h" // This line includes the header file for the advance_trig class
#include "History.h"
#include <string>
#include <cmath> // This line includes the cmath library, which provides mathematical functions
#include <cstdlib> // This line includes the cstdlib library, which provides general purpose functions
#include <iostream> // This line includes the iostream library, which provides basic input and output services
#define PI 3.141592654 // This line defines PI as an approximation of the mathematical constant pi

using namespace std;

// This is the definition of the start function for the advance_trig class
void advance_trig::start(history_list& history)
{
    do {
        cout << "Press 1 for arccos" << endl; // This line prints a message
        cout << "Press 2 for arcsin" << endl; // This line prints a message
        cout << "Press 3 for arctan" << endl; // This line prints a message
        cout << "Select a Function (or press 0 to exit): "; // This line prints a message
        cin >> selected; // This line gets input from the user and stores it in selected variable


        switch (selected) { // This switch statement performs different actions based on the value of selected
            case 1:
                arccos(history); // If input from user is 1 it means the selected is 1, which corresponds to case 1 in the switch statement so this line calls the arccos function
                break;

            case 2:
                arcsin(history); // If input from user is 2 it means the selected is 2, which corresponds to case 2 in the switch statement so this line calls the arcsin function
                break;

            case 3:
                arctan(history); // If input from user is 3 it means the selected is 3, which corresponds to case 3 in the switch statement so this line calls the arctan function
                break;

            case 0:
                return;  // If selected is 0, this line ends the function
                cout << "\n";
                break;

            default:
                cout << "Invalid input" << endl; // If selected is not any of the above values (0 , 1, 2, 3) , this line prints a message
            }
        } while (selected != 0); // The loop continues until selected is not equal to '0'
}

// This is the definition of the arccos function for the advance_trig class
void advance_trig::arccos(history_list& history){

    double x, result, result2; // These are variables to store the input and the result
        cout << "Enter your number in the range [-1, 1]: ";  // This line prompts the user to enter a number
        cin >> x; // This line gets input from the user and stores it in x


        result = acos(x); // The acos function from the cmath library is used to calculate the arccosine of x
        cout << "arccos" << "(" << x << ") = " <<  result << " radians" << endl; // This line prints the result in radians

        result2 = result * 180 / PI;
        cout << "arccos" << "(" << x << ") = " << result2 << " degrees" << endl << endl;  // This line prints the result in degrees

        // This line is creating a string variable named 'output'.
        string output = "arccos (" + to_string(x) + ") = " + to_string(result) + " radians";
        history.add_result(output); // This line is adding the 'output' string to our history.

        // This line is creating a string variable named 'output2'.
        string output2 = "arccos (" + to_string(x) + ") = " + to_string(result2) + " degrees";
        history.add_result(output2); // This line is adding the 'output2' string to our history.
}

// This is the definition of the arcsin function for the advance_trig class
void advance_trig::arcsin(history_list& history){
    double x, result, result2; // These are variables to store the input and the result
        cout << "Enter your number in the range [-1, 1]: "; // This line prompts the user to enter a number
        cin >> x; // This line gets input from the user and stores it in x

        result = asin(x); // The asin function from the cmath library is used to calculate the arcsine of x
        cout << "arcsin" << "(" << x << ") = " << result << " radians" << endl; // This line prints the result in radians

        result2 = result * 180 / PI;
        cout << "arcsin" << "(" << x << ") = " << result2 << " degrees" << endl << endl; // This line prints the result in degrees

        // This line is creating a string variable named 'output'.
        string output = "arcsin (" + to_string(x) + ") = " + to_string(result) + " radians";
    
        history.add_result(output); // This line is adding the 'output' string to our history.

        // This line is creating a string variable named 'output2'.
        string output2 = "arcsin (" + to_string(x) + ") = " + to_string(result2) + " degrees";
    
        history.add_result(output2); // This line is adding the 'output2' string to our history.
}

// This is the definition of the arctan function for the advance_trig class
void advance_trig::arctan(history_list& history){
    double x, result, result2; // These are variables to store the input and the result
        cout << "Enter your number (all real numbers): "; // This line prompts the user to enter a number
        cin >> x; // This line gets input from the user and stores it in x

        result = atan(x); // The atan function from the cmath library is used to calculate the arctangent of x
        cout << "arctan" << "(" << x << ") = " << result << " radians" << endl; // This line prints the result in radians

        result2 = result * 180 / PI;
        cout << "arctan" << "(" << x << ") = " << result2 << " degrees" << endl << endl; // This line prints the result in degrees

        // This line is creating a string variable named 'output'.
        string output = "arctan (" + to_string(x) + ") = " + to_string(result) + " radians";

        history.add_result(output); // This line is adding the 'output' string to our history.
        
        // This line is creating a string variable named 'output2'.
        string output2 = "arctan (" + to_string(x) + ") = " + to_string(result2) + " degrees";

        history.add_result(output2); // This line is adding the 'output2' string to our history.
    }
