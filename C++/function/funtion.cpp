#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    int c;
    c = a * b;
    return c;
};
int main () {
    int a;
    int b;
    cout<<"Enter the value of a ";
    cin>> a;
    cout<<"Enter the value of b ";
    cin>> b;
    cout<<"The  return of a x b is " << multiply(a,b) <<endl;
    return 0;
}
