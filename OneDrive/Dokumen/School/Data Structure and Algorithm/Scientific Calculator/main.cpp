#include <iostream>
#include <cmath>   
#include <cstdlib> 
#define PI 3.141592654

using namespace std;

char chosen;

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
        cout << "arccos" << "(" << x << ")" << " = " << result << " radians" << endl;
        cout << "arcos" << "(" << x << ")" << " = " << result * 180 / PI << " degrees" << endl << endl;
    }

    void arcsin() {
        double x, result;
        cout << "Enter your number in the range [-1, 1]: ";
        cin >> x;

        result = asin(x);
        cout << "arcsin" << "(" << x << ")" << " = " << result << " radians" << endl;
        cout << "arcsin" << "(" << x << ")" << " = " << result * 180 / PI << " degrees" << endl << endl;
    }

    void arctan() {
        double x, result;
        cout << "Enter your number (all real numbers): ";
        cin >> x;

        result = atan(x);
        cout << "arctan" << "(" << x << ")" << " = " << result << " radians" << endl;
        cout << "arctan" << "(" << x << ")" << " = " << result * 180 / PI << " degrees" << endl << endl;
    }
};

int main() {
    system("cls");
    do {
        cout << "==== Welcome to our Scientific Calculator! ====" << endl;
        
        cout << "Press 0 to exit" << endl;
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for multiplication" << endl;
        cout << "Press 4 for division" << endl;
        cout << "Press 5 for trigonometry function" << endl;
        cout << "Press 6 for advance trigonometry function " << endl;
        cout << "What function do you want to use? " << endl;
        cin >> chosen;
        switch (chosen) {
            case '1':
                
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
            {
                advance_trig advTrig;
                advTrig.start();
                break;
            }
            case '0':
                exit(0);
                
                break;
                
            default:
                
                cout << "Invalid input" << endl;
                system("cls");
        }

    } while (chosen != '0');

    return 0;
}
