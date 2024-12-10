#include <iostream>
using namespace std;
int main()
{
    int stack[5] = {2, 4, 6, 8, 10};
    for (int top = 0; top < 5; top++)
    {
        if (top == 4)
        {
            top = top - 1;
            exit(0);
        }
        else
        {
            cout << stack[top] << ", ";
        }
    }
    return 0;
}   