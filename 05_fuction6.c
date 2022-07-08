#include<stdio.h>
int sum(int n);
int main(){
    int N;

    printf("enter the number N :");
    scanf("%d",&N);
    int S=sum(N);
    printf("%d",S);

return 0;
}
int sum(int n){
    

    
    return n+sum(n-1);

    
     

    
    
}