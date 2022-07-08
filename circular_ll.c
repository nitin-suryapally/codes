#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *tail, *temp;
int count = 0;

void create()
{
    struct node *newnode;
    head = 0;
    tail = 0;
    int choice = 1;

    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        count++;
        printf("enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = temp = newnode;
        }
        else
        {

            tail->next = newnode;
            tail = newnode;
            newnode->next = head;
        }

        printf("enter 1 to create a newnode\n");
        scanf("%d", &choice);
    }
}

void display()
{

    for (int i = 0; i < count; i++)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    create();
    display();
}

// insertion and deletion same as signle linked list using count ;
