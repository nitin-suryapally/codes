#include<stdio.h>
void count(int*ptr, int n);
int main(){
    int* j;
int ar[10]={0,-1,-2,-3,4,5,6,7,8,9};
j=&ar[0];
count(j, 10);

return 0;
}
void count(int*ptr, int n){
    int j=0;
    int t=0;
    for(int i=0; i<10; i++){
        if((*(ptr+i))*1<=0){
            j++;

        }
        else{
            t++;
        }

    }
    printf("number of negative numbers are %d \n", j);
    printf("number of positive  numbers are %d \n", t);

}