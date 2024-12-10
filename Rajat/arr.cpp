#include<iostream>
using namespace std;
int main(){
    int arr[3] = {1,2,3};
    int store = 0;
    int digit;
    int rev = 0;
    for (int i = 0; i < 3; i++)
    {
        store = store*10 + arr[i];
    } 
    cout << store << endl;
    for (int i = 0; i < 3; i++)
    {
        digit = store % 10;
        rev = rev*10 + digit;
        store = store / 10;
    }
    cout << rev;
    
}