//Check if ADDITION_H is already defined or not to prevent double inclusion
#ifndef ADDITION_H
#define ADDITION_H

//Include the "History.h" header file, which is needed for this class
#include "History.h"

//Declaration of the addition class
class addition
{
    public:
        //Public method declaration: start
        //This method takes a reference to a history_list object as an argument
        void start(history_list& history);

};

//End of the header file guard
#endif // ADDITION_H
