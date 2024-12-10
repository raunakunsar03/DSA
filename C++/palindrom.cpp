#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number ";
    int n;
    cin >> n;
    int reverse = 0;
    int digit;
    int original = n;
    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << reverse << endl;

    if (original == reverse)
    {
        cout << "The number " << "(" << reverse << ")" << "is a palindrom" << endl;
    }
    else
    {
        cout << "The number " << "(" << reverse << ")" << " is not a palindrom" << endl;
    }
}