#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : " <<endl;
    cin>> age;
    //Now here we use ternary opertor

    age >= 18 ? cout<< "You can vote" <<endl : cout<<"You are a minor, You can't vote" <<endl; 
}