#include <iostream>
using namespace std;
int main()
{
    /* Here is the code Floyd's triangle pattern of 
        A,B,C,D.... alphabets 
        like this :- A
                     B C
                     D E F
                     G H I J
    */

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    char ch = 'A';

    for (char i = 0; i < n; i++)
    {
        for (char j = i + 1; j > 0; j--)
        {
            cout << j << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}