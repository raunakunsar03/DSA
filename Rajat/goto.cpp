#include <iostream>
using namespace std;
int main()
{
    int x = 0;
loop:
    if (x < 5)
    {
        cout << x << endl;
       x++;
    }
    goto loop;
