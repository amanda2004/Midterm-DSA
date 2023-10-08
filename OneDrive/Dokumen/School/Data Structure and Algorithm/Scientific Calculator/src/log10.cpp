    #include <iostream>
    #include <cmath>
    #include <cstdlib>
    #define PI 3.141592654
    #include "logarithms10.h"

    void logarithms10::start 
    {
    double log10num;
    std::cout << "Enter a number: ";
    std::cin >> log10num;

    double log10val = log10  (log10num);
    std::cout << "The value of " << log10num << " to the base of 10 is " << log10val << "\n";
    }
