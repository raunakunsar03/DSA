#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[7] = {2, 4, 5, 6, 7, 8, 11};
    cout << binarySearch(arr, 7, 8);
}