#include<stdio.h>
int update(int arr[], int n, int num, int k){
    arr[k-1]=num;

    for(int j=0; j<n; j++){
        printf("%d \n",arr[j]);
    }

}
int main(){
int n,k,num;
    int arr[20];
    printf("enter the size of the array \n");
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        printf("enter the element at %d index : \n",j);
        scanf("%d",&arr[j]);

    }
    printf("enter the number you want to update\n" );
    scanf("%d",&num);
    printf("enter the position  you want to update \n");
    scanf("%d",&k);
    update(arr,n,num,k);
return 0;
}