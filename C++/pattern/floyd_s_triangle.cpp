#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j > 0; j--)
        {
            cout << num << " ";
            num = num + 1;
        }

        cout << endl;
    }

    return 0;
}