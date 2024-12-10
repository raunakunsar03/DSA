#include <iostream>
using namespace std;
//Program to find volume
class Gobject
{
private:
    int l, b, h;
 
public:
    void getdetails()
    {
        cout << "Enter the value of l: ";
        cin >> l;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of h: ";
        cin >> h;
    }

    void showdetails() const
    {
        cout << "Volume is " << l * b * h << endl;
    }
};

int main()
{
    Gobject box;
    box.getdetails();
    box.showdetails();
    return 0;
}