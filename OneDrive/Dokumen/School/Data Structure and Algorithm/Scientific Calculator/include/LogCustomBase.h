#ifndef LOGCUSTOMBASE_H
#define LOGCUSTOMBASE_H
#include "History.h" //Include the declaration of the 'history_list' class from "History.h"

//Declare the 'LogCustomBase' class
class LogCustomBase
{
    public:
        //Declare a public member function named 'start' that takes a reference to a 'history' object
        void start(history_list& history);
};

#endif // LOGCUSTOMBASE_H
