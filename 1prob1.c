#include <stdio.h>

int main()
{
    int l = 0;
   
    char st[20];
    char *ptr;
    ptr = &st[0];
    printf("enter the string :\n");
    gets(st);
    while (*(ptr) != 0)
    {
        
        ptr++;
        l++;
    }
    printf("the length of the string is %d \n", l);

    return 0;
}