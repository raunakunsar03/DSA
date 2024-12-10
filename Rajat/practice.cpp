#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

Node* insertAtBegin(Node *head, int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;  // return the new head of the list
}

void print(Node *head) {
    Node *current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

int main() {
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);

    // Insert node with value 5 at the beginning
    node1 = insertAtBegin(node1, 5);  // update node1 to new head

    // Now, link node1 to node2 to form the list: 5 -> 10 -> 20
    node1->next = node2;

    // Print the list
    print(node1);

    return 0;
}
