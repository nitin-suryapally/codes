#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stacks
{
    int *array;
} stack;

int main()
{
    int n, max, top, temp, t;
    top = -1;
    printf(" n : \n");
    scanf("%d", &n);
    stack *s = malloc(sizeof(stack));
    s->array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf(" t : \n");
        scanf("%d", &t);

        switch (t)
        {
        case 1:
            printf("enter the num to push : \n");
            scanf("%d", &t);
            s->array[top++] = t;
            if (top == -1)
            {
                max = t;
            }
            else
            {
                if (max < t)
                {
                    max = t;
                }
            }

            break;

        case 2:
            top--;
            temp = 1;

            break;

        case 3:
            if (temp == 1)
            {
                max = s->array[0];

                for (int i = 0; i <= top; i++)
                {
                    if (max < s->array[i])
                    {
                        max = s->array[i];
                    }
                }
            }

            printf("%d \n",max);

            break;
        }
    }
}

//  https://www.hackerrank.com/challenges/maximum-element/problem?isFullScreen=false