#include <iostream>
using namespace std;

class infunc
{
private:
    char roll_no[12], name[30];
    int previousmark1, previousmark2;
    float avgmarks;

public:
    infunc();
    void print();
    void getdata();
    inline float avg()
    {
        avgmarks = (previousmark1 + previousmark2) / 2;
        return avgmarks;
    }
};
infunc::infunc()
{
    strcpy(roll_no, "000000000000");
    strcpy(name, "myname");
    previousmark1 = 0;
    previousmark2 = 0;
}
void infunc::print()
{
    cout << ".....WELCOME TO RESULT PORTAL....." << endl
         << "RTU roll = " << roll_no << endl
         << "name = " << name << endl
         << "1st sem mark = " << previousmark1 << endl
         << "2nd sem mark = " << previousmark2 << endl
         << "total average score = " << avgmarks << endl
         << ".....Thank You....." << endl;
}
int main()
{
    infunc a, b, c;
    a.getdata();
    a.print();
    b.getdata();
    b.print();
    return 0;
}
