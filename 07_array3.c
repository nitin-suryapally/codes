#include <stdio.h>
void reverse(int *ptr, int n);
int main()
{

    int *j;
    int ar[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    j = &ar[0];
    printf("before call \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", ar[i]);
    }
    reverse(j, 10);
    printf("after call\n");

    return 0;
}
void reverse(int *ptr, int n)
{

    for (int i = 0; i < 10; i++)
    {
        (*(ptr + i)) = (*(ptr + (n - 1 - i)));
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d \n", (*(ptr + j)));
    }
}