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
        printf("1\n");
    }

    else
    {
        newnode->next = top;
        top = newnode;
        printf("2\n");
    }


}



int main(){
    int r = 1;

    while (r == 1){
        push();
        printf("r :\n");
        scanf("%d",&r);
    }
}