#include <stdio.h>

int main()
{
    int a;
    printf("select the range of your percentage abtained \n");
    printf("between 90 to 100 select 1\n");
    printf("between 80 to 90 select 2\n");
    printf("between 70 to 80 select 3\n");
    printf("between 60 to 70 select 4\n");
    printf("less than 60%  select 5\n");

    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("your grade is A\n");
        break;
    case 2:
        printf("your grade is B\n");
        break;
    case 3:
        printf("your grade is C\n");
        break;
    case 4:
        printf("your grade is D\n");
        break;
    case 5:
        printf("your grade is E\n");
        break;
    }
    return 0;
}