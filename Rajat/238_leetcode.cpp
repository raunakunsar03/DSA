#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4};
    int ans[4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            ans[i] = arr[i] * arr[j] / arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
}