#include <iostream>
class Solution
{
public:
    bool isHappy(int n)
    {
        int digit;
        int ans = 0;
        if (n == 1)
        {
            return true;
        }
        
        while (n != 1)
        {
            if (n < 10)
            {
                return false;
            }

            ans = 0;
            while (n > 0)
            {
                digit = n % 10;
                ans = ans + (digit * digit);
                n = n / 10;
            }
            n = ans;
            if (ans == 1)
            {
                return true;
            }
        }
        return false;
    }
};
using namespace std;
int main()
{
    int n;
    cin >> n;
    Solution S;
    cout << S.isHappy(n);
}