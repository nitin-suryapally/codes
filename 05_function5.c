#include<stdio.h>
int fibo(int n);
int main(){
    int N;
    int number;
//0,1,1,2,3,5,8........
 printf("enter the term :");
 scanf("%d",&N);

 number=fibo(N);
 printf("%d",number);
return 0;
}
int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
     
     return fibo(n-1)+fibo(n-2);
    


}