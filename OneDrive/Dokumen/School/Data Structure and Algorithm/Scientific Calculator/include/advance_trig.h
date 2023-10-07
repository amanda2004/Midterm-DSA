#ifndef ADVANCE_TRIG_H
#define ADVANCE_TRIG_H


class advance_trig
{
    public:
        char selected;

        advance_trig() {
            selected = '0';
        }

        void start();
        void arccos();
        void arcsin();
        void arctan();
};

#endif // ADVANCE_TRIG_H
