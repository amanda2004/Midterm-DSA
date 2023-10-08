#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H


class Trigonometry
{
    public:
        void start();
        void calculateSine();
        void calculateCosine();
        void calculateTangent();

    private:
        char selected;
        double Sin(double degrees);
        double Cos(double degrees);
        double Tan(double degrees);
};

#endif // TRIGONOMETRY_H
