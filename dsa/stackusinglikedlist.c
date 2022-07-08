// o(1) operations push and pop 
// last in foirst out
// infex (oparand operator oparand )
/* for () {} [] we go r-l;
   for operators we go l-r */




#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push()

{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data \n");
    scanf("%d", &newnode->data);

    if (top == 0)
    {
        newnode->next = 0;
        top = newnode;
    }

    else
    {
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    int temp;
    struct node *tem;
    tem = top;
    temp = top->data;
    printf("the data popped is %d \n", temp);
    top = top->next;
    free(tem);
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("the stack is empty under flow condition . \n");
    }
    while (top != 0)
    {
        printf("%d \n", top->data);
        top = top->next;
    }

    top = temp;
    free(temp);
}

int main()
{
    int r = 1;
    int t;

    printf("creating a linked list \n");

    while (r == 1)
    {
        printf("enter 2 for push. \n enter 3 for pop. \n enter 4 for display \n");
        scanf("%d", &t);
        switch (t)
        {
        case 2:

            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid command \n");
        }

        printf("enter 1 to continue above operations :\n");
        scanf("%d", &r);
    }

    return 0;
}