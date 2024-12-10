#include <iostream>
using namespace std;
int main()
{
    int a = 19;
    int x = 3;
    int digit = 0;
    while (x != 0)
    {
        digit = a % 10;
        a/=10;
        cout << digit << endl;
        x--;
    }

    return 0;
}