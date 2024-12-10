#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
    {
        cout << "one" << endl;
    }
    if (n == 2 || m == 2)
    {
        cout << "two" << endl;
    }

    if (n == 3 || m == 3)
    {
        cout << "three" << endl;
    }

    if (n == 4 || m == 4)
    {
        cout << "four" << endl;
    }
    if (n == 5 || m == 5)
    {
        cout << "five" << endl;
    }
    if (n == 6 || m == 6)
    {
        cout << "six" << endl;
    }
    if (n == 7 || m == 7)
    {
        cout << "seven" << endl;
    }
    if (n == 8 || m == 8)
    {
        cout << "eight" << endl;
    }
    if (n == 9 || m == 9)
    {
        cout << "nine" << endl;
    }
    if (m > 9)
    {
        cout << "nine" << endl;
        if (m % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    
}