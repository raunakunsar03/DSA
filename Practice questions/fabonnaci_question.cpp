#include <iostream>
using namespace std;
int fabonnaci(int n)
{
    int first = 0, second = 1, nth_number;

    for (int i = 3; i <= n; i++)
    {
        nth_number = first + second;
        first = second;
        second = nth_number;
    }

    return nth_number;
}
int main()
{
    int n;
    cout << "Enter thevalue of n : ";
    cin >> n;
    cout << fabonnaci(n) << endl;
    return 0;
}