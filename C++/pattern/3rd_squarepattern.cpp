#include <iostream>
using namespace std;
int main()
{
    // Here is the square patter code of A,B,C,D... characters
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl; 
    }

    return 0;
}