#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    char operation;
    cout << "Enter the value of a : ";
    cin >> num1;
    cout << "Enter the operation : (+ - * /) ";
    cin >> operation;
    cout << "Enter the value of b : ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result<<endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result<<endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " x " << num2 << " = " << result<<endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Infinite";
        }
        else
        {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result<<endl;
        }

        break;
    }

    return 0;
}