#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    int formula;
    for (int i = 1; i <= 20; i++)
    {
        formula = n * i;
        cout<< n << " " << '*' << ' ' << i << " = " << formula << endl;
    }
    return 0;
}