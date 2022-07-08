#include<stdio.h>
#include<string.h>

struct complex {
    int real; 
    int im;
};

void display(struct complex arr[], int n){
    for(int j=0; j<n; j++){
        printf("( %d, %d) is the %d complex number \n",arr[j].real, arr[j].im, j+1);
    }
}

int main(){

    struct complex arr[5];
    for(int i=0; i<5; i++){
        printf("enter the real part of %d complex number :\n",i+1);
        scanf("%d",&arr[i].real);
        printf("enter the imaginary part of %d complex number :\n",i+1);
        scanf("%d",&arr[i].im);
    }

     display ( arr, 5);

return 0;
}