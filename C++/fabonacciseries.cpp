#include <iostream>
using namespace std;

int main()
{

    int n = 20;
    int a = 0;
    int b = 1;
    cout << a << "" << b;

    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << next << endl;
        a = b;
        b = next;
    }
}