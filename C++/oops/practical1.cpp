#include<iostream>
#include<string.h>
using namespace std;

class Complex{
    int real1, real2, img1, img2;
    public: Complex(int x, int y, int a, int b){
        real1 = x;
        real2 = a;
        img1 = y;
        img2 = b;
    }

    void Add(){
        cout << "Addition is = " << real1 + real2 <<"+"<<img1 + img2 << "i" <<endl;
    }
    void Sub(){
        cout << "Subtraction is = " << real1 - real2 <<"-"<<img1 - img2 << "i" <<endl;
    }
};

int main(){
    Complex C(7,8,5,6);
    C.Add();
    C.Sub();
return 0;
}