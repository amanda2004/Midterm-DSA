#include <iostream>
#include <cstdlib>
#include "advance_trig.h"
#include "History.h"
#include "powerclass.h"
#include "sqrt.h"

using namespace std;

int main() {
    history_list history;
    advance_trig advTrig;
    power pow;
    sqrt square_root;

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
        cout << "Press 7 for logarithms" << endl;
        cout << "Press 8 for ln" << endl;
        cout << "Press 9 for trigonometry function" << endl;
        cout << "Press 10 for advance trigonometry function" << endl;
        cout << "Press 11 for power" << endl;
        cout << "Press 11 for showing the history list" << endl;

        int chosen;
        cout << "What function do you want to use? ";
        cin >> chosen;


        switch (chosen) {
            case 1:

                break;

            case 2:

                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                square_root.start();
                break;

            case 6:

                break;

            case 7:

                break;

            case 8:

                break;

            case 9:

                break;

            case 10:
                advTrig.start();
                break;

            case 11:
                pow.start();
                break;

            case 12:
                history.show_history();
                break;

            case 0:
                exit(0);
                break;

            default:
                cout << "Invalid input" << endl;
                system("cls");
        }
    } while (true);
}
