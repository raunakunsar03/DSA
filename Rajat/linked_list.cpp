#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *insertAtBegin(Node *&head, int data)
{

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}
void print(Node *&head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
Node *insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        return newNode;
    }
    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
void insertAtPosition(Node *&head, int pos, int data)
{
    int count = 1;
    Node *temp = head;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{
    Node *node1 = new Node(10);
    print(node1);
    insertAtBegin(node1, 5);
    print(node1);
    insertAtEnd(node1, 15);
    print(node1);

    insertAtPosition(node1, 2, 11);
    print(node1);

    return 0;
}