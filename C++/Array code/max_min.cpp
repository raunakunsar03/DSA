#include <iostream>
#include<vector>
using namespace std;

int max(int max[], int size)
{
    int number = max[0];
    for (int i = 1; i < size; i++)
    {
        
        if (number < max[i])
        {
            number = max[i];
        }
    }
    return number;
}
int min(int min[], int size)
{
    int number = min[0];
    for (int i = 1; i < size; i++)
    {
        if (number > min[i])
        {
            number = min[i];
        }
    }
    return number;
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int getMax[size];
    cout << "Enter the elemet : ";

    for (int i = 0; i < size; i++)
    {
        cin >> getMax[i];
    }
    cout << endl
         << "The maximum value is " << max(getMax, size) << endl;
    cout << endl
         << "The minimum value is " << min(getMax, size) << endl;

    /*vector is used when we don't want to input the size of array
    we have to use a header file (#include <vector>)
    */
    // vector<int> x;
    return 0;

    
}