#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "The value of a is " << a << endl 
         << "The value of b is " << b << endl;
}