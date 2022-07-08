#include <stdio.h>
void step(int n);
int main()
{
    int n = 3;
    step(n);

    return 0;
}
void step(int n)
{
    if (n < 0)
    {
        return;
    }
    else
    {

        step(n - 2);
        if (n == 1)
        {
            printf("0 ");
        }
    }
    printf("%d ", n);
    