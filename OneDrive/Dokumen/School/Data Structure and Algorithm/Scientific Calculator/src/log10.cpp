#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include "log10.h"
#include "History.h"

void logarithms10::start(history_list& history)
{
    // To declare the number that the user s going to input as a variable
    double log10num;
    // Asking the user to input the number
    std::cout << "Enter a number: ";
    // The number inputted will be stored in log10num
    std::cin >> log10num;

    // Declaring that the variable log10val is the result of log(log10num)
    double log10val = log10  (log10num);
    // Showing the result to the user
    std::cout << "The value of " << log10num << " to the base of 10 is " << log10val << "\n" << "\n";

    //to store the result in the calculator's history
    string output = "The value of " + to_string(log10num) + " to the base of 10 is " + to_string(log10val);
    history.add_result(output);
    }
