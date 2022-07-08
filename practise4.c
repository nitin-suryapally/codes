// https://www.hackerrank.com/challenges/reverse-array-c/problem

#include<stdio.h>
#include<stdlib.h>
void reversearr(int n, int*p);
int main(){
int*ptr;
int i,n;
scanf("%d",&n);
if(n>1000){
    return 0;
}
ptr=(int*)malloc(n*sizeof(int)); 

for(i=0; i<n; i++ ){
    scanf("%d",&ptr[i]);
    if(ptr[i]>1000){
        return 0;
    }
    
}

reversearr(n,ptr);



return 0;
}
void reversearr(int n, int*p){
    int*arr;
    int i;
    arr=(int*)malloc(n*(sizeof(int)));
    for(i=0; i<n; i++){
        arr[n-1-i]=p[i];
    }

    for(int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

}