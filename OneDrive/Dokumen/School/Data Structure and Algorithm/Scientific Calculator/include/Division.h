//Check if DIVISION_H is already defined or not to prevent double inclusion
#ifndef DIVISION_H
#define DIVISION_H

//Include the "History.h" header file, which is needed for this class
#include "History.h"

//Declaration of the division class
class division
{
    public:
        //Public method declaration: start
        //This method takes a reference to a history_list object as an argument
        void start(history_list& history);

};

//End of the header file guard
#endif // DIVISION_H
