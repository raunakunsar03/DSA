#include <iostream>
using namespace std;

int Ap(int n){
    int answer;

    answer = 3 * n + 7;
    return answer;
}
int main()
{
    int n; cout<<"Enter the value of n : ";
    cin>> n; 
    cout<< Ap(n);


    return 0;
}