#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top ;

void push()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data in the node : \n");
    scanf("%d", &newnode->data);

    newnode->link = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("the stack is empty :\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d \n", temp->data);
            temp = temp->link;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("the stack is empty \n");
    }
    printf("%d", top->data);
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("the stack is empty \n");
    }
    printf("the data popped out is %d \n", temp->data);
    top = temp->link;
    free(temp);
}
int main()
{
    top=0;
    printf("enter 1 to push an element in the stack \n");
    printf("enter 2 to display the elements in the stack \n");
    printf("enter 3 to peek \n");
    printf("enter 4 to pop an element from the stack \n");
    int j;
    int i = 9;
    while (i == 9)
    {
        printf("choose the operation by entering corresponding value : \n");
        scanf("%d", &j);
        switch (j)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            peek();
            break;
        case 4:
            pop();
            break;

        default:
            printf("enter a valid number :\n");
            break;
        }
        printf("enter 9 to repeate \n or 0 to teminate \n");
        scanf("%d",&i);
    }

    return 0;
}