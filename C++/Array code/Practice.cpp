#include <iostream>
using namespace std;
// Function for array printing

void Printarray(int arr[], int n)
{
    cout << "The array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Declearing the array

    int second[10] = {5, 6, 7};

    // Accessing the array
    cout << "Value at 14 index is : " << second[2] << endl;

    int n = 15;
    Printarray(second, 10);

    cout << endl;

    // Initialising an array

    int third[15] = {1};
    int a = 15;

    // Printing an element using function

    Printarray(third, 15);
    int printsize = sizeof(third) / sizeof(int);

    cout << endl;

    cout<< printsize << endl;

    cout << endl << "Printing done" << endl;

    //Array of character data type

    char ch[5] = {'a','b','c','d', 'e'};

    cout<<"The array is : ";
    
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    
    return 0;
}