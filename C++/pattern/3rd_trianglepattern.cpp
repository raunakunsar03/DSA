#include <iostream>
using namespace std;
int main()
{
    /*Here is the code of triamgle patter of A,B,C... 
    like this A
              BB
              CCC
              DDDD
    */
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << "";
            
        }
        cout << endl;
        ch += 1;
    }

    return 0;
}