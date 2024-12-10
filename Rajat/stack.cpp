#include <iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top = top + 1;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            cout << "Pop element is: " << arr[top] << endl;
            top = top - 1;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "No elements" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack st(5);

    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout << "Top = " << st.peek() << endl;
    cout << "Is empty: " << st.isEmpty() << endl;
}