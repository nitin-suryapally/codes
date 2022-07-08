#include<stdio.h>
float force(int m);

int main(){
    int mass;
    float F;
    printf("enter the mass :\n");
    scanf("%d",&mass);
    F = force(mass);
    printf("%f",F);

return 0;
}
float force(int m){
    float f;
    f=m*(9.8);
    return f;
}