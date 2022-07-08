#include<stdio.h>

void sum(int n, int*ptr);

int main(){
    int n;
int arr[n];
int* ptr;
ptr=&arr;
 printf("enter the size of the array :\n");
 scanf("%d",&n);

 for(int i=0; i<n; i++){
     printf("enter the value at %d index \n",i);
     scanf("%d",&arr[i]);
 }

 sum(n,ptr);

return 0;
}
void sum(int n, int*ptr){
    int s=0;
    for(int j=0; j<n; j++){
        s=s+(*(ptr));
        ptr++;
    }

    printf("the sum of elements is %d \n",s);
}