#include<stdio.h>
void add(int*a);

int main(){
int i=9;
int*j=&i;

printf("%d\n",j);

add(j);
return 0;
}
void add(int*a){
    printf("%d\n",a);
}