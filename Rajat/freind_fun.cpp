#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    void getdata()
    {
        cin >> a >> b;
    }
    void friend add(demo &obj1)
    {
        cout << obj1.a + obj1.b;
    }
};
int main()
{
    demo d1;
    d1.getdata();
    add(d1);

    return 0;
}