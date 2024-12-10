#include <iostream>
using namespace std;
int main()
{
    int q = 5;
    int arr[q], i, ch = 1, r = -1, f = -1, n = 5, max = n - 1, val;
    cout << "\n 1 insertion \n 2 deletion \n 3 display \n 4 Exit " << endl;

    while (ch)
    {
        cout << "Enter choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            if (r == max)
            {
                cout << "Queue is full" << endl;
                break;
            }
            else
            {
                if (r == -1)
                {
                    r = r + 1;
                    f = f + 1;
                }
                r = r + 1;
                cin >> val;
                arr[r] = val;
            }
            break;
        }
        case 2:
        {
            if (f == -1)
            {
                cout << "Queue is empty" << endl;
                break;
            }

            else
            {
                cout << "Remove Element is: " << arr[f] << endl;
                f = f + 1;
                n = n + 1;
                if (f == r)
                {
                    cout << "Remove Element is: " << arr[f] << endl;
                    f = -1;
                    r = -1;
                }
            }
            break;
        }

        case 3:
        {
            cout << "Queue is : ";
            for (int i = f; i < r + 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        case 4:
        {
            return 0;
        }
        }
    }
    return 0;
}