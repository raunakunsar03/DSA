#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Loop for spaces :- n-i-1

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Loop for set number 1: i+1

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // Loop for set number 2
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
    
    cout << endl;
}

return 0;
}