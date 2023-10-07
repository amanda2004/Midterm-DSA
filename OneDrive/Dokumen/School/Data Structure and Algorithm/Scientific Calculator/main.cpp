#include <iostream>
<<<<<<< HEAD
#include <cstdlib>
#include "advance_trig.h"
=======
#include <cmath>   
#include <cstdlib> 
#define PI 3.141592654
>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368

using namespace std;

char chosen;

<<<<<<< HEAD
=======
class advance_trig {
public:
    char selected;

    advance_trig() {
        selected = '0';
    }

    void start() {
        do {
            cout << "Press 1 for arccos" << endl;
            cout << "Press 2 for arcsin" << endl;
            cout << "Press 3 for arctan" << endl;
            cout << "Select a Function (or press 0 to exit): ";
            cin >> selected;

            switch (selected) {
                case '1':
                    arccos();
                    break;

                case '2':
                    arcsin();
                    break;

                case '3':
                    arctan();
                    break;

                case '0':
                    return;
                    break;

                default:
                    cout << "Invalid input" << endl;
            }
        } while (selected != '0');
    }

    void arccos() {
        double x, result;
        cout << "Enter your number in the range [-1, 1]: ";
        cin >> x;

        result = acos(x);
        cout << "acos(x) = " << result << " radians" << endl;
        cout << "acos(x) = " << result * 180 / PI << " degrees" << endl << endl;
    }

    void arcsin() {
        double x, result;
        cout << "Enter your number in the range [-1, 1]: ";
        cin >> x;

        result = asin(x);
        cout << "asin(x) = " << result << " radians" << endl;
        cout << "asin(x) = " << result * 180 / PI << " degrees" << endl << endl;
    }

    void arctan() {
        double x, result;
        cout << "Enter your number (all real numbers): ";
        cin >> x;

        result = atan(x);
        cout << "atan(x) = " << result << " radians" << endl;
        cout << "atan(x) = " << result * 180 / PI << " degrees" << endl << endl;
    }
};

>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368
int main() {
    system("cls");
    do {
        cout << "==== Welcome to our Scientific Calculator! ====" << endl;
<<<<<<< HEAD

=======
        
>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368
        cout << "Press 0 to exit" << endl;
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
<<<<<<< HEAD
        cout << "Press 5 for square root" << endl;
        cout << "Press 6 for exponents" << endl;
        cout << "Press 7 for logarithms" << endl;
        cout << "Press 8 for ln" << endl;
        cout << "Press 9 for trigonometry function" << endl;
        cout << "Press 10 for advance trigonometry function" << endl;
        cout << "Press 11 for showing the history list" << endl;
=======
        cout << "Press 5 for trigonometry function" << endl;
        cout << "Press 6 for advance trigonometry function " << endl;
>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368
        cout << "What function do you want to use? " << endl;
        cin >> chosen;
        switch (chosen) {
            case '1':
<<<<<<< HEAD

                break;

            case '2':

                break;

            case '3':

                break;

            case '4':

                break;

            case '5':

                break;

            case '6':

                break;

            case '7':

                break;

            case '8':

                break;

            case '9':

                break;

            case '10':
=======
                
                break;

            case '2':
                
                break;

            case '3':
                
                break;

            case '4':
                
                break;

            case '5':
                
                break;

            case '6':
>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368
            {
                advance_trig advTrig;
                advTrig.start();
                break;
            }
<<<<<<< HEAD

            case '11':

                break;

            case '0':
                exit(0);

                break;

            default:

=======
            case '0':
                exit(0);
                
                break;
                
            default:
                
>>>>>>> bbd3a209f71386f88cf351cb01f39e8764704368
                cout << "Invalid input" << endl;
                system("cls");
        }

    } while (chosen != '0');

    return 0;
}
