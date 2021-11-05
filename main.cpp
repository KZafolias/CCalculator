#include <iostream>

using namespace std;

int main()
{
    string type; //ignore the addition part
    double num1, num2;
    cout << "ccalculator starting up...." << endl;
    cout << "enter the type of the mathematical practice "<< endl;
    cin >> type;

    if (type == "addition") {
        cout << "type number 1" << endl;
        cin >> num1;
        cout << "type number 2" << endl;
        cin >> num2;
        cout << num1 + num2;
    }

    else if (type == "division") {
        cout << "type number 1" << endl;
        cin >> num1;
        cout << "type number 2" << endl;
        cin >> num2;
        cout << num1 / num2;
    }

    else if (type == "substraction") {
        cout << "type number 1" << endl;
        cin >> num1;
        cout << "type number 2" << endl;
        cin >> num2;
        cout << num1 - num2;
    }

    else if (type == "multiplication") {
        cout << "type number 1" << endl;
        cin >> num1;
        cout << "type number 2" << endl;
        cin >> num2;
        cout << num1 * num2;
    }
    //ending creditis
    cout << "Kostas Zafolias" << endl;
    cout << "" << endl;

    return 0;
}
