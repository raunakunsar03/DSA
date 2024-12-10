#include <iostream>
using namespace std;

int main()
{
    int x = 40;
    cout<<"The value of x was : " << x <<endl;
    x = 92;
    cout<<"The value of x is now : " << x <<endl;

    //Here we use constants variable whose value can not be changed after it's initialized
    const int a = 5;
    cout << "The value of 'a' when we use const is fix that is :" <<a << endl;

    //a = 6; //We will get an error because a is a constant
}  