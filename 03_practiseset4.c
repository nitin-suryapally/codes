#include<stdio.h>

int main(){
    int year;
    int a;
printf("enter the year :");
scanf("%d",year);

if(year%4==0 && year%100 && year%400){
    printf("the year is leap year");
}
else{
    printf("the year is not a leap year");
}
return 0;
}