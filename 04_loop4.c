#include<stdio.h>
int loop1(int a);
int loop2(int b);
int c;int d;
int main(){
    
    c=loop1(10);
    printf("%d \n",c);
    printf("loop1 \n");
    d=loop2(10);
    printf("%d \n",d);
    printf("loop2 \n");

return 0;
}

int loop1(int a){
    int sum1=0;
    int i=0;
    do{
        i++;
        sum1+=i;
        
    }
    while(i<=a);
    
    return sum1;
}

int loop2(int b){
    int sum2=0;
    int j=0;
    for(j=0; j<=b; j++){
        sum2+=j;

    }
    
    return sum2;
}