#include <iostream>
using namespace std;

int factorial(int n)
{
    int fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int ncr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int ans = numerator / denominator;

    return ans;
}

int main()
{
    int answer;
    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    answer = ncr(n, r);

    cout << answer;

    return 0;
}