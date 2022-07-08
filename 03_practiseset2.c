#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, tot;
    float subject1, subject2, subject3, total;
    printf("enter the marks of subjest 1 : \n");
    scanf("%d", &sub1);
    printf("enter the marks of subjest 2 : \n");
    scanf("%d", &sub2);
    printf("enter the marks of subjest 3 : \n");
    scanf("%d", &sub3);
    tot = sub1 + sub2 + sub3;
    subject1 = sub1;
    subject2 = sub2;
    subject3 = sub3;
    total = tot / 3.0;
    printf("%f\n", subject1);
    printf("%f\n", subject2);
    printf("%f\n", subject3);
    printf("%f\n", total);
    printf("%d\n", tot);

    if (total >= 40.0 && subject1 >= 33.0 && subject2 >= 33.0 && subject3 >= 33.0)
    {
        printf("you are passed");
    }
    else
    {
        printf("you are failed");
    }

    return 0;
}