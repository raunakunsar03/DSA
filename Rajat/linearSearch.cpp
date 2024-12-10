#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    int mask = 0;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
            
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    cout << linearSearch(arr, 5, 6) << endl;
}