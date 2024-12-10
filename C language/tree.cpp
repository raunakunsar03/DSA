#include <stdio.h>
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
    printf("\nEnter the data : ");
    scanf("%d", &newnode->data);
    newnode->Left = NULL;
    newnode->Right = NULL;
    return newnode;
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->Left);
        printf("%d ", root->data);
        inorder(root->Right);
    }
}
int main()
{
    struct Node *Root = NULL, *ptr = NULL;
    for (int i = 0; i < 9; i++)
    {
        ptr = Root;
        printf("\nRoot = %d", ptr);
        struct Node *newnode = creatNode();
        printf("NewNode = %d", newnode);
        if (i == 0)
        {
            Root = newnode;
            printf("\nRoot = %d", Root);
        }
        else
        {
            int count = 0;
            while (count == 0)
            {
                printf("\nptr = %d", ptr);
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
    printf("\n tree = ");
    inorder(Root);
    return 0;
}