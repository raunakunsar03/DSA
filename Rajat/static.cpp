#include<iostream>
using namespace std;
class stud{
    int marks;
    string name;
    int roll;
    public:
    static int object;

    stud(){
        object++;
    }
    void get(){
        cout << "Name: ";
        cin >> name;
        cout << endl << "Marks: ";
        cin >> marks;
        cout << endl << "Roll: ";
        cin >> roll;
    }
    void display(){
        cout << "Name - " << name << endl;
        cout << "Roll - " << roll << endl;
        cout << "Marks - " << marks << endl;
    }
};
int stud :: object = 0;
int main(){
    stud S1;
    stud S2;
    S1.get();
    S1.display();
    S2.get();
    S2.display();
    cout << "Total object = " << stud::object;
return 0;
}