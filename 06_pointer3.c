#include<stdio.h>
int multi(int*a);
int main(){
    int S;
int i=7;
int*j=&i;
printf("%d\n",i);
S=multi(j);
printf("%d\n",S);


return 0;
}
int multi(int*a){
    int s;
    s=(*a)*10;
    return s;
}