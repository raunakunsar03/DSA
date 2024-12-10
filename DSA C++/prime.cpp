#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number" << " ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i != 0)
        {
            cout << "This number is prime" << endl;
            i++;
            break;
        }
        else
        {
            cout << "This number is not prime" << endl;
            i++;
            break;
        }
    }
}