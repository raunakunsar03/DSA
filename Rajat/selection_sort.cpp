#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 4, 3, 6};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}