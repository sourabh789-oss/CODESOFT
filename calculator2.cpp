#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int opperform;

    cout << "enter the number 1" << endl;
    cin >> num1;
    cout << "enter the number 2" << endl;
    cin >> num2;

    while (opperform != 0)
    {
        cout << "__________________\n"
             << endl;
        cout << "enter 1 for Addition" << endl;
        cout << "enter 2 for Subtaction" << endl;
        cout << "enter 3 for  Multiplication" << endl;
        cout << "enter 4 for  Division" << endl;
        cout << "enter 0 for Terminate this operation loop" << endl;

        cin >> opperform;
        switch (opperform)
        {

        case 1:
        {
            cout << "The Addition of  Two Number " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
            break;
        }

        case 2:
        {
            cout << "The Subtaction of  Two Number " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
            break;
        }

        case 3:
        {
            cout << "The Multiplication of  Two Number " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
            break;
        }

        case 4:
        {
            cout << "The Division of  Two Number " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
            break;
        }

        default:
        {
            cout << "You entered a invalid value" << endl;
        }
        }
    }
    return 0;
}