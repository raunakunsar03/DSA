#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    char operation;

    cout << "Enter 1st number : ";
    cin >> num1;

    cout << "Enter the operation (+,-,/,*) : ";
    cin>> operation;

    cout << "Enter 2nd number : ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;

        cout << num1 << " + " << num2 << " = " << result<< endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result<< endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result<< endl;
        }
        else
        {
            cout << "invalid operation" << endl;
        }
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result<<endl;
        break;
    }
}