#include<stdio.h>

int main(){
int arr[3][10];
for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
        printf("enter the number \n:");
        scanf("%d",&arr[i][j]);
    }
}

for(int k=0; k<3; k++){
    for(int t=0; t<10; t++){
        printf("enter the number %d \n",arr[k][t]);
        
    }
}


return 0;
}