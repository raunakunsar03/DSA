#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of array are :" << endl;
    for (int j = 0; j < 5; j++)
    {   
        cout << arr[j] << ", ";
    }
 }
