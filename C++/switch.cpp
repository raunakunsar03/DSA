#include <iostream>
using namespace std;
int main()
{
    int day;
    int month;
    int year;
    cout << "Enter the day (1-7) :- " << endl; // 1 for monday, 2 for tuesday & so on.....
    cin >> day;

    switch (day)
    {
    case 1:

        cout << "Monday" << endl;
        cout << "Enter the month " << endl;
        cin >> month;
        switch (month)
        {
            case 1:
            cout<<"Monday / January" <<endl;
            break;

            case 2:
            cout<<"Monday / February" <<endl;
            break;

            case 3:
            cout<<"Monday / March" <<endl;
            break;

            case 4:
            cout<<"Monday / April" <<endl;
            break;

            case 5:
            cout<<"Monday / May" <<endl;
            break;

            case 6:
            cout<<"Monday / June" <<endl;
            break;

            case 7:
            cout<<"Monday / July" <<endl;
            break;

            case 8:
            cout<<"Monday / August" <<endl;
            break;

            case 9:
            cout<<"Monday / September" <<endl;
            break;

            case 10:
            cout<<"Monday / October" <<endl;
            break;

            case 11:
            cout<<"Monday / November" <<endl;
            break;

            case 12:
            cout<<"Monday / December " <<endl;
            break;

        }
    break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wedday" << endl;
        break;

    case 4:
        cout << "Thrusday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Incorrect input" << endl;
        break;
    }
}
