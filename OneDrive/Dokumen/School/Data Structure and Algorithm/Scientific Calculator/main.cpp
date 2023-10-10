#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <vector>
#include <deque>
#include <cmath>
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

class Token {
public:
    double num1, num2;
    char op;

    Token(double a, char b, double c) : num1(a), op(b), num2(c) {}
    Token() : num1(0), op(0), num2(0) {}
    void initialize(double a, char b, double c) { num1 = a; op = b; num2 = c; }
    double solve() {
        switch (op) {
            case '+': return (num1 + num2);
            case '-': return (num1 - num2);
            case '*': return (num1 * num2);
            case '/': return (num1 / num2);
            case '^': return (pow(num1, num2));
            case 'r': return (pow(num2, 1.0 / num1));
            case 's': return (sin(num2 * M_PI / 180.0));
            case 'c': return (cos(num2 * M_PI / 180.0));
            case 't': return (tan(num2 * M_PI / 180.0));
            case 'a': return (asin(num2) * 180.0 / M_PI);
            case 'q': return (acos(num2) * 180.0 / M_PI);
            case 'e': return (atan(num2) * 180.0 / M_PI);
            case 'l': return (log10(num2));
            case 'n': return (log(num2));
        }
        return 0.0;
    }

string expression;
deque<double> numbers;
deque<char> operators;

void express() {
    cout << "'+' to add\n'-' to subtract\n'*' to multiply\n'/' to divide\n'^' for powers (ex: 2^2) \n'r' for roots (ex: square root of 4: 2r4, cube root of 27: 3r27, etc.) \n";
    cout << "'s' for sin (ex: sin(30) = s30)\n'c' for cos (ex: cos(30) = c30) \n't' for tan (ex: tan(30) = t30) \n'a' for arcsin (ex: arcsin(1) = a1) \n'q' for arccos (ex: arcos(1) = q1)\n'e' for arctan (ex: arctan(5) = e5) \n";
    cout << "'l' for log10 (ex: log10(20)= l20, remember l is not one)\n'n' for natural logarithm (ln) (ex: ln(4) = n4)\n\n";
    cout << "Enter your expression (NO SPACE):\n";
    cin >> expression;

    return;
}

void extract() {
    vector<int> digits;
    unsigned int i, k;
    int temp = 0;

    for (i = 0; i <= expression.size(); i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            digits.push_back(expression[i] - '0');
        } else {
            operators.push_back(expression[i]);
            for (k = 0; k < digits.size(); k++) {
                temp += digits.at(k) * pow(10, (digits.size() - 1 - k));
            }
            numbers.push_back(temp);
            digits.clear();
            temp = 0;
        }
    }
    operators.erase(operators.end());
}

void addsub() {
    Token tempToken;
    double temp = numbers.at(0);

    while (true) {
        if (operators.at(0) == '+' || operators.at(0) == '-') {
            numbers.erase(numbers.begin());
            tempToken.initialize(temp, operators.at(0), numbers.at(0));
            temp = tempToken.solve();

            if (operators.size() == 1) {
                operators.clear();
                numbers.at(0) = temp;
                return;
            } else
                operators.erase(operators.begin());
        } else {
            break;
        }
    }
}

void multidiv() {
    Token tempToken;
    double temp;
    unsigned int i;

    for (i = 0; i < operators.size(); i++) {
        if (operators.at(i) == '*' || operators.at(i) == '/') {
            tempToken.initialize(numbers.at(i), operators.at(i), numbers.at(i + 1));
            temp = tempToken.solve();

            if (operators.size() == 1) {
                operators.clear();
                numbers.at(0) = temp;
                return;
            } else {
                operators.erase(operators.begin() + i);
                numbers.erase(numbers.begin() + i + 1);
                numbers.at(i) = temp;
            }
            --i;
        }
    }
    addsub();
}

void calculate() {
    Token tempToken;
    double temp;
    unsigned int i;

    for (i = 0; i < operators.size(); i++) {
        if (operators.at(i) == '^' || operators.at(i) == 'r' || operators.at(i) == 's' || operators.at(i) == 'c' || operators.at(i) == 't' ||
            operators.at(i) == 'a' || operators.at(i) == 'q' || operators.at(i) == 'e' || operators.at(i) == 'l' || operators.at(i) == 'n') {
            if (operators.at(i) == 't') {  // If the operator is 't' for tan
                tempToken.initialize(0, operators.at(i), numbers.at(i + 1));  // Apply it to the next number
            } else {
                tempToken.initialize(numbers.at(i), operators.at(i), numbers.at(i + 1));
            }
            temp = tempToken.solve();

            if (operators.size() == 1) {
                operators.clear();
                numbers.at(0) = temp;
                return;
            } else {
                operators.erase(operators.begin() + i);
                numbers.erase(numbers.begin() + i + 1);
                numbers.at(i) = temp;
            }
            --i;
        }
    }
    multidiv();
}

void start(history_list& history) {
    express();
    extract();
    calculate();
    cout << "Final answer: " << numbers.at(0) << endl << endl;

    history.add_result(expression + " = " + to_string(numbers.at(0)));
    }
};


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
    Token token;

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
        cout << "Press 14 for custom calculation" << endl;
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

            case 14:
                token.start(history);  // Call start on the Token object
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
