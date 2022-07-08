#include<stdio.h>
void insert(int arr[],int n,int num,int k){
    int z=n;
    while(z>=k){
        int t=arr[z];
        arr[z+1]=t;
        z--;
    }
    arr[z+1]=num;
    for(int i=0; i<=n; i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    int num,k;
    int n;
    int arr[20];
    printf("enter the size of the array \n");
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        printf("enter the element at %d index : \n",j);
        scanf("%d",&arr[j]);

    }
    printf("enter the number you want to insert : \n");
    scanf("%d",&num);
    printf("enter the index \n");
    scanf("%d",&k);

    insert(arr,n,num,k);

return 0;
}