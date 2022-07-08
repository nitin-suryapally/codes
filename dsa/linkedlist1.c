#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp;
struct node *head;
int count=1;

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

void insertatbeg()
{
    temp = head;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    head = newnode;
    newnode->next = temp;
    void display();
}

void insertatend()
{
    temp = head;

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("enter the data :\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    void display();
}

void insertatposition()
{
    temp = head;
    int p;
    int i = 1;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = 0;
    printf("enter the position after which you want to insert a node :\n");
    scanf("%d", &p);
    while (i < p)
    {
        temp = temp->next;
        i++;
    }
    printf("enter the value : \n");
    scanf("%d", &newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
    void display();
}

void delatbeg()
{
    temp = head;
    if (head == 0)
    {
        printf("no nodes \n");
    }
    else
    {
        head = temp->next;
    }
    free(temp);
    void display();
}

void delatend()
{
    temp = head;
    struct node *prev;
    while (temp->next != 0)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = 0;
    free(temp);

    void display();
}

void delatpos()
{
    temp = head;
    int po;
    int i = 1;
    struct node *nxt;
    printf("the position after which you want to delete node : \n");
    scanf("%d", &po);
    while (i < po)
    {
        temp = temp->next;
        i++;
    }
    nxt = temp->next;
    temp->next = nxt->next;
    free(nxt);
    void display();
}
int main()
{

    struct node *newnode;
    int c;
    head = 0;
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
        count++;

    } while (c == 1);
    int i = 9;
    int j;

    while (i == 9)
    {
        printf("enter the number :\n");
        scanf("%d", &j);
        switch (j)
        {
        case 1:
            display();
            break;

        case 2:
            insertatbeg();
            break;

        case 3:
            insertatend();
            break;

        case 4:
            insertatposition();
            break;
        case 5:
            delatbeg();
            break;

        case 6:
            delatend();
            break;
        case 7:
            delatpos();
            break;

        default:
            printf("selected a wrong number :\n");
            break;
        }
        printf("enter 9 to continue \n");
        scanf("%d", &i);
    }

    return 0;
}