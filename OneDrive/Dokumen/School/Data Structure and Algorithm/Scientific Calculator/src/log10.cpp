    #include <iostream>
    #include <cmath>
    #include <cstdlib>
    #define PI 3.141592654
    #include "log10.h"

    void logarithms10::start()
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
    std::cout << "The value of " << log10num << " to the base of 10 is " << log10val << "\n";
    }
