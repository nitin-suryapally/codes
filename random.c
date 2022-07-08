#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int number;
srand(time(0));
number=rand()%10+1;// generates random number between 1 to 10
printf("%d",number);
return 0;
}