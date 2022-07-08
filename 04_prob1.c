#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("enter the number you want to push \n");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("over flow condition \n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int a;
    if (top == -1)
    {
        printf("underflow condition \n");
    }
    else
    {
        a = stack[top];

        top--;
        printf("The poped element is %d \n ", a);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("%d \n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("the stack is empty \n");
    }
    else
    {
        for (int x = top; x >= 0; x--)
        {
            printf("%d \n", stack[x]);
        }
    }
}
int main()
{
    int k, t;
    printf("enter \n 1-push\n 2-pop\n 3-peep\n 4-display\n");

    do
    {
        printf("enter the number :\n");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("select correct number \n");
        }
        printf("to select another action press 8 \n ");
        scanf("%d",&t);
    } while (t == 8);

    return 0;
}