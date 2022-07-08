#include<stdio.h>
#include<string.h>

typedef struct complex{
    int r; 
    int i;
}c;
int main(){
    c c1;
    c1.r=6;
    c1.i=7;
    printf("the complex number with real and imp part is %d %d \n", c1.r, c1.i);


return 0;
}