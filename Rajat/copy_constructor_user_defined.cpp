#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int id;
    int fees;

public:
    student(string a, int b, int c)
    {
        name = a;
        id = b;
        fees = c;
    }

    student(const student &s)
    {
        name = s.name;
        id = s.id;
        fees = s.fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main()
{
    student s1("Rajat", 114, 20000);
    student s2 = s1;
    s1.display();
    cout << endl;
    s2.display();
    return 0;
}
