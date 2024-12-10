#include <iostream>
using namespace std;
class print
{
    int x, y;

public:
    print(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    print p(4, 5);
    p.display();
    return 0;
}