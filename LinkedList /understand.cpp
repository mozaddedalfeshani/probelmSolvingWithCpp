/*
Name : Mir Mozadded Alfeshani Murad
ID : 221-15-6047
*/

// Header file
#include <iostream>
struct Node
{ // creating a Node
    int data;
    struct Node *next; // This pointer will help to pointing next value
};

// We are just entering value
int main()
{
    struct Node *a, *b;
    // we are creating space for store
    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));

    // we are just enter the value
    a->data = 2;
    a->next = NULL;
    b->data = 3;
    b->next = NULL;

    // as linked list we need to linked up 2 node
    a->next = b;
    b->next = NULL;
    while (a->next != NULL)
    {
        std::cout << a->data << std::endl;
        a->data = a->next;
    }

    return 0;
}