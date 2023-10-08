// advance_trig.h
#ifndef ADVANCE_TRIG_H // This line checks if ADVANCE_TRIG_H has not been defined yet
#define ADVANCE_TRIG_H // This line defines ADVANCE_TRIG_H

// This is the declaration of the advance_trig class
class advance_trig
{
    public: // These members are accessible from outside the class
        int selected;  // This is a public member variable. It's an integer that stores the selected option

        // This is the constructor for the advance_trig class. It initializes selected to 0
        advance_trig() {
            selected = 0;
        }

        // These are declarations for public member functions of the advance_trig class
        void start(); // This function will start the program
        void arccos(); // This function will calculate the arccosine
        void arcsin(); // This function will calculate the arcsine
        void arctan(); // This function will calculate the arctangent
};

#endif // This line ends the conditional directive from the #ifndef at the top
