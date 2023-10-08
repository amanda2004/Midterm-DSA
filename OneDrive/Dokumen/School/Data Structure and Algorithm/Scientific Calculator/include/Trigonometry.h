#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H
#include "History.h"

class Trigonometry
{
    public:
        void start(history_list& history);
        void calculateSine(history_list& history);
        void calculateCosine(history_list& history);
        void calculateTangent(history_list& history);

    private:
        char selected;
        double Sin(double degrees);
        double Cos(double degrees);
        double Tan(double degrees);
};

#endif // TRIGONOMETRY_H
