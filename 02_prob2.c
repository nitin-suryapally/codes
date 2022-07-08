#include<stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
 int n;
    int arr[20];
    printf("enter the size of the array \n");
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        printf("enter the element at %d index : \n",j);
        scanf("%d",&arr[j]);

    }
    display(arr,n);
return 0;
}