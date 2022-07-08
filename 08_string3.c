#include <stdio.h>
void slice(char *j, int n, int m)
{
    char st2[30];
    int k = 0;
    for (int i = (n - 1); i < (m ); i++)
    {
        st2[k] = (*(j + i));
        k++;
    }
    printf(" %s is the sliced string \n", st2);
}
int main()
{
    int n, m;
    char st1[] = "nitin";
    char *ptr;
    ptr = &st1[0];

    printf("enter the starting point of the slice :\n");
    scanf("%d", &n);
    printf("enter the ending  point of the slice :\n");
    scanf("%d", &m);

    slice(ptr, n, m);

    return 0;
}