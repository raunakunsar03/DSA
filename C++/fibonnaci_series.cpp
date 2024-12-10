#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int first = 0, second = 1, next;
    if (n >= first)
    {
        cout << first << ",";
    }
    if (n >= second)
    {
        cout << second << ",";
    }

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        cout << next << ",";
        first = second;
        second = next;
    }

    return 0;
}