#include<iostream>
#include<string.h>
using namespace std;
//Base class
class Area{
    public:
    
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }

    protected:
    int width, height;
};

// Derived class
class Triangle: public Area{
    public:
    float getArea(){
        return (width*height)/2;
    }
};

int main() {
    Triangle t;
    t.setWidth(5);
    t.setHeight(10);

    cout << "Area of the triangle: " << t.getArea() << endl;
    return 0;
}