#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value :- ";
    cin >> n;
    int digit;
    int reverse = 0;
    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse number is " << reverse;
    return 0;
}