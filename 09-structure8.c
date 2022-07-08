#include <stdio.h>
typedef struct vectors
{
    int x;
    int y;
} v;

v sumofvector(v v1, v v2);
int main()
{
    v v1, v2, sum;
    v1.x = 34;
    v1.y = 23;
    printf("the x dem is %d and y dem is %d \n", v1.x, v1.y);
    v2.x = 33;
    v2.y = 53;
    printf("the x dem is %d and y dem is %d \n", v2.x, v2.y);
    sumofvector(v1, v2);
    sum = sumofvector(v1, v2);
    printf("the x dem of result is %d and y dem is %d \n", sum.x, sum.y);
    return 0;
}
v sumofvector(v v1, v v2)
{
    v result;
    
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}