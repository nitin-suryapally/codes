#include<stdio.h>
float temp(int c);

int main(){
    int a;
    float f;
// (32°F − 32) × 5/9 = 0°C

printf("enter temperature in celcius :");
scanf("%d",&a);

f=temp(a);
printf("%f",f);

return 0;
}
float temp(int c){

float f;
f=(c*(9.0/5))+32;
return f;
}