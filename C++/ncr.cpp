#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <=n; i++) {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
   int numer = factorial(n);
   int demon = factorial(r)  * factorial(n - r);
   int result = numer / demon;
   return result;
    
}
int main () {
    int n, r;
    cout<<"Enter the value of n : ";
    cin>> n ;
    cout<<"Enter the value of r : ";
    cin>> r;

    cout << ncr(n,r) <<endl;
     
}