#include<stdio.h>

void del(int arr[],int n, int k){
    int z=n;
    while(k<(z-1)){
        int t=arr[k+1];
        arr[k]=t;
        k++;
    }
    for(int j=0; j<(n-1); j++){
        printf("%d \n",arr[j]);
    }

}

int main(){
 int n,k;
    int arr[20];
    printf("enter the size of the array \n");
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        printf("enter the element at %d index : \n",j);
        scanf("%d",&arr[j]);

    }
    printf("enter the index  you want to delete \n");
    scanf("%d",&k);
    del(arr,n,k);
return 0;
}