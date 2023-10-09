// This is a header guard. It prevents the header file from being included more than once in a single compilation.
#ifndef POWER_H // This line checks if POWER_H has not been defined yet
#define POWER_H // This line defiNES POWER_H
#include "History.h" // This includes the "History.h" header file, which contains the declaration of the "history_list" class.

class power // This is the declaration of the "power" class.
{
    public: // These members are accessible from outside the class
        void start(history_list& history); // This is a public member function named "start". It takes a reference to an object of type "history_list" as its argument.
};


#endif // This line ends the conditional directive from the #ifndef at the top
