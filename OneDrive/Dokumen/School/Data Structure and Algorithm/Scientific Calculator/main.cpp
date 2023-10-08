#include <iostream>
#include <cstdlib>
#include "advance_trig.h"
#include "History.h"
#include "powerclass.h"
#include "sqrt.h"
#include "log10.h"
#include "naturallogarithm.h"
#include "LogCustomBase.h"
#include "addition.h"
#include "substraction.h"
#include "Trigonometry.h"
#include "multiplication.h"
#include "division.h"

using namespace std;

int main() {
    history_list history;
    advance_trig advTrig;
    power pow;
    sqrtCalculator square_root;
    logarithms10 logarithms_10;
    naturallogarithm ln_function;
    LogCustomBase logcustom_function;
    addition add;
    substraction subs;
    Trigonometry trig_function;
    multiplication mul;
    division div;

    system("cls");
    do {
        cout << "==== Welcome to our Scientific Calculator! ====" << endl;

        cout << "Press 0 to exit" << endl;
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
        cout << "Press 5 for square root" << endl;
        cout << "Press 6 for exponents" << endl;
        cout << "Press 7 for logarithms base 10" << endl;
        cout << "Press 8 for logarithms with custom base" << endl;
        cout << "Press 9 for ln" << endl;
        cout << "Press 10 for trigonometry function" << endl;
        cout << "Press 11 for advance trigonometry function" << endl;
        cout << "Press 12 for showing the history list" << endl;
        cout << "Press 13 for deleting the calculator's history" << endl;

        int chosen;
        cout << "What function do you want to use? ";
        cin >> chosen;


        switch (chosen) {
            case 1:
                add.start(history);
                break;

            case 2:
                subs.start(history);
                break;

            case 3:
                mul.start(history);
                break;

            case 4:
                div.start(history);
                break;

            case 5:
                square_root.start(history);
                break;

            case 6:
                pow.start(history);
                break;

            case 7:
                logarithms_10.start(history);
                break;

            case 8:
                logcustom_function.start(history);
                break;

            case 9:
                ln_function.start(history);
                break;

            case 10:
                trig_function.start(history);
                break;

            case 11:
                advTrig.start(history);
                break;
            
            case 12:
                history.show_history();
                break;

            case 13:
                history.delete_history();
                cout << "History deleted." << endl << endl;
                break;
            
            case 0:
                exit(0);
                break;

            default:
                cout << "Invalid input" << endl << endl;
                system("cls");
        }
    } while (true);
}
