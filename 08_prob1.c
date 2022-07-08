#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void insert()
{
    int x;
    printf("enter the value : \n");
    scanf("%d", &x);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else if ((rear + 1) % N == front)
    {
        printf("the queue is full \n");
    }
    else
    {
        rear = ((rear + 1) % N);
        queue[rear] = x;
    }
}

void delete ()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n");
    }
    else if (front == rear)
    {
        printf("the deleted element is %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("the deleted element is %d\n", queue[front]);
        front = ((front + 1) % N);
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        while (i != rear)
        {
            printf("%d \n ", queue[i]);
            i = ((i + 1) % N);
        }
        printf("%d \n", queue[rear]);
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        printf("%d \n", queue[front]);
    }
}
int main()
{
    int k, t;
    printf("enter \n 1-insert\n 2-delete\n 3-peek\n 4-display\n");

    do
    {
        printf("enter the number :\n");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
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
        scanf("%d", &t);
    } while (t == 8);

    return 0;
}