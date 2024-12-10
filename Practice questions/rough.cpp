#include <iostream>
using namespace std;
int number(int n)
{
    int ans =  n * n;
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    n = number(n);
    cout << n << endl;

    return 0;
}