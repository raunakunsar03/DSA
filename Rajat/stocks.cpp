#include <iostream>
using namespace std;
int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int length = sizeof(prices) / sizeof(int);
    int bestbuy = prices[0];
    int maxprofit = 0;
    for (int i = 1; i < length; i++)
    {
        if (prices[i] > bestbuy)
        {
           maxprofit = max(maxprofit,prices[i]-bestbuy);
        }
        bestbuy = min(bestbuy,prices[i]);
       
    }
   cout << maxprofit;

    return 0;
}