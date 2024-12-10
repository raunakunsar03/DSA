#include <iostream>
using namespace std;
int main()
{
    long double n = -2147483648.0;
    long double x = 1.0;
    long double ans = 1.0;
    long binForm = n;
    // cin >> x >> n;
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }

    if (n == 0)
    {
        ans = 1;
    }

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    cout << ans;
    return 0;
}