#include<iostream>
using namespace std;
class student{
    char name[20];
    int id;
    int fees;
    public:
    student(){
        cout << "Name:- ";
        cin >> name;
        cout << endl << "Id:- ";
        cin >> id;
        cout << endl << "Fees:- ";
        cin >> fees;
    }
    void display(){
        cout << "Name:- " << name << endl;
        cout << "Id:- " << id << endl;
        cout << "Fees:- " << fees << endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;

}