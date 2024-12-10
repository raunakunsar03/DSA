#include <iostream>
using namespace std;
//Program to find area
class Gobject
{
private:
    int l, b;

public:
    void getdetails()
    {
        cout << "Enter the value of l: ";
        cin >> l;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void showdetails() const
    {
        cout << "Area is " << l * b << endl;
    }
};
int main()
{
    Gobject box;
    box.getdetails();
    box.showdetails();
    return 0;
}