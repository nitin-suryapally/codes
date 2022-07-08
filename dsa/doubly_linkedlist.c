// doubly linked list implimentation

#include <stdio.h>
#include <stdlib.h>

struct node // defining own data type
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *temp, *newnode, *tail;

void create() // creating nodes and generating links
{

    head = 0;
    tail = 0;
    int choice = 1;

    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data\n ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;

        if (head == 0)
        {
            head = temp = newnode;
            tail = temp;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
            tail = temp;
        }
        printf("enter 1 to continue ");
        scanf("%d", &choice);
    }

    temp = head;
}

void display()
{
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = head;
}

void insertatbig()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data\n ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;

    head->prev = newnode;
    newnode->next = head;
    head = newnode;

    temp = head;
}

void insertatend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data\n ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;

    while (temp->next != 0)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = 0;

    temp = head;
}

void insertatposition()
{
    int p;
    struct node *temp1;
    int i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data\n ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;

    printf("enter the postion after which you want to insert :\n");
    scanf("%d", &p);

    while (i < p)
    {
        temp = temp->next;
        i++;
    }

    newnode->next = temp->next;
    temp->next = temp1;
    temp1->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;

    temp = head;
}

void reverse()
{
    struct node *temp1;
    temp1 = temp->next;

    while (temp1 != 0)
    {
        temp->next = temp->prev;
        temp->prev = temp1->prev;

        temp = temp1;
        temp1 = temp1->next;
    }

    temp = head;
}

int main()
{
    create();
    insertatbig();
    insertatend();
    insertatposition();
    reverse();
    display();
    return 0;
}