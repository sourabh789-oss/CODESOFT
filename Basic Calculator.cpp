#include <iostream>
using namespace std;

void Add(int num1, int num2)
{

    cout << "The Addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}

void Subtract(int num1, int num2)
{

    cout << "The Subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
}

void Multiply(int num1, int num2)
{

    cout << "The  Multiply of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
}

void Divide(int num1, int num2)
{

    cout << "The Division  of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
}

int main()
{
    int num1, num2;
    int opperform;


    cout << "enter the number 1" << endl;
    cin >> num1;
    cout << "enter the number 2" << endl;
    cin >> num2;


    cout << "enter the number 1 for Add 2 for Subtract 3 for multiply and 4 for divide" << endl;
    cin >> opperform;
    if (opperform == 1)
    {
        Add(num1, num2);
    }
    else if (opperform == 2)
    {
        Subtract(num1, num2);
    }
    else if (opperform == 3)
    {
        Multiply(num1, num2);
    }
    else
    {
        Divide(num1, num2);
    }
    return 0;
}