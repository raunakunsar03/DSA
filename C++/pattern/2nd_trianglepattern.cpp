#include <iostream>
using namespace std;
int main()
{
    //Here is the code of triangle patter of numbers....
    
    int n;
    int num =1;
    cout << "Entet the vlaue of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num;
        }
        cout << endl;
        num = num+1;
    }

    return 0;
}