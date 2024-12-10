#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    void setReal(double r)
    { 
        imag = 'i';
    }

    double getReal() const
    {
        return real;
    }

    double getImag() const
    {
        return imag;
    }

    void print() const
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    Complex add(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
};

int main()
{

    Complex c1(0, 0);
    Complex c2(10, 12);

    cout << "Complex number 1: ";
    c1.print();
    cout << "Complex number 2: ";
    c2.print();

    Complex c3 = c1.add(c2);

    cout << "Sum of the complex numbers: " << "4 + 2 = " << 4 + 2 << endl;

    return 0;
}