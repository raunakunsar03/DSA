#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            return 1;
        }
        return 0;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the vlaue of n : ";
    cin >> n;
    if (isPrime(n)){
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
}