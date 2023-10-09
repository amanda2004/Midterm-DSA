#include <cmath> // This includes the cmath library, which provides a set of functions to compute common mathematical operations and transformations.
#include <cstdlib> // This line includes the cstdlib library, which provides general purpose functions
#include <iostream> //  This line includes the iostream library, which provides basic input and output services
#include <string> // This includes the string library, which provides support for strings.
#include "History.h" // This includes the "History.h" header file, contains the declaration of the "history_list" class.
#include "powerclass.h" // This includes the "powerclass.h" header file, which contains the declaration of the "power" class.
#define PI 3.141592654 // This defines a constant named PI with a value of 3.141592654.

void power::start(history_list& history) // This is the implementation of the "start" member function of the "power" class.
{
    using namespace std; // This is a using directive. It allows us to use elements in the std namespace without qualifying them with std::.

    double base, exponent, result; // These are variable declarations. base and exponent will hold the base number and exponent entered by the user, respectively. result will hold the result of raising base to the power of exponent.

    // These lines prompt the user to enter a base number and an exponent, and store them in base and exponent, respectively.
    cout << "Enter the base number: "; 
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // This line calculates base raised to the power of exponent and stores it in result using the pow function from the cmath library.
    result = pow(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl << endl;  // This line outputs the result     

    // This line is creating a string variable named 'output'
    string output = to_string(base) + " ^ " + to_string(exponent) + " = " + to_string(result);
    
    // This line is adding the 'output' string to our history.
    history.add_result(output); 
}
