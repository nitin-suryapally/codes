#include<stdio.h>
float avg(int a, int b, int c);

int main(){
    int a,b,c;
    float d;
printf("enter the 1st number :\n ");
scanf("%d",&a);
printf("enter the 2nd number :\n ");
scanf("%d",&b);
printf("enter the 3rd number :\n ");
scanf("%d",&c);

d=avg(a,b,c);
printf("%f",d);
return 0;
}

float avg(int a, int b, int c){
    
    (a+b+c)/3.0;
    return (a+b+c)/3.0;;
    
}