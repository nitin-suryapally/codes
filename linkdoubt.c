#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp;
struct node *head;
    head = 0;

void display()
{
    struct node *newnode;
        temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{

    struct node *newnode;
    int c;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the value : \n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("to create another node press 1\n to exit press 0 : \n");
        scanf("%d", &c);

    } while (c == 1);

    display();

    return 0;
}