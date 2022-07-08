#include <stdio.h>

int main()
{
    int multi[10];

    for (int i = 0; i < 10; i++)
    {
        multi[i] = (i+1) * 5;
        printf("%d \n",multi[i]);

    }
    return 0;
}
