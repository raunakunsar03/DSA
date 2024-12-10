#include <iostream>
using namespace std;
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
};

struct Node *creatNode()
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    cout << endl
         << " Enter the data : ";
    cin >> newnode->data;
    newnode->Left = NULL;
    newnode->Right = NULL;
    return newnode;
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->Left);
        cout << root->data;
        inorder(root->Right);
    }
}
int main()
{
    struct Node *Root = NULL, *ptr = NULL;
    for (int i = 0; i < 9; i++)
    {
        ptr = Root;
        cout << endl
             << "Root = %d",
            ptr;
        struct Node *newnode = creatNode();
        cout << "NewNode = %d", newnode;
        if (i == 0)
        {
            Root = newnode;
            cout << endl
                 << "Root = %d",
                Root;
        }
        else
        {
            int count = 0;
            while (count == 0)
            {
                cout << endl
                     << "ptr = %d",
                    ptr;
                if (ptr->data > newnode->data)
                {
                    if (ptr->Left == NULL)
                    {
                        ptr->Left = newnode;
                        count++;
                    }
                    ptr = ptr->Left;
                }
                else
                {
                    if (ptr->Right == NULL)
                    {
                        ptr->Right = newnode;
                        count++;
                    }
                    ptr = ptr->Right;
                }
            }
        }
    }
    cout << endl
         << "\n tree = ";
    inorder(Root);
    return 0;
}