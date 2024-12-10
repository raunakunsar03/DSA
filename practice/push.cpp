#include <iostream>
using namespace std;
int main()
{
    //Here is the program of push
    
    int stack[5];
    int top = -1;
    int max = 5;
    while (max)
    {
        if (top == max - 1)
        {
            cout << "Stack is overflow" << endl;
            exit(0);
        }
        else
        {
            top = top + 1;
            cin >> stack[top];
        }
    }
   
    
}