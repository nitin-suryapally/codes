[3:36 PM, 5/28/2021] Nitin: #include<stdio.h>
void step(int n);
void step1(int n);
void step2(int n);
void step3(int n);

int main(){
    int n=3;
    step(n);

return 0;
}
void step(int n){
    for(int i=0; i<3; i++){
        if(i==0){
            step1(n);
            printf("\n");
            }
            if(i==1){
                step2(n);
                printf("\n");
            }
             if(i==2){
                step3(n);
            }
    }
}



void step1(int n){
    if (n < 0)
    {
        return;
    }
    else
    {

        step(n - 2);
        if (n == 1)
        {
            printf("0 ");
        }
    }
    printf("%d ", n);
}
void step2(int n){
    if (n < 0)
    {
        return;
    }
    else
    {

        step(n - 1);
        if (n == 2)
        {
       …
[3:43 PM, 5/28/2021] Nitin: #include <stdio.h>
void step(int n);
int main()
{
    int n = 3;
    step(n);

    return 0;
}
void step(int n)
{
    if (n < 0)
    {
        return;
    }
    else
    {

        step(n - 2);
        if (n == 1)
        {
            printf("0 ");
        }
    }
    printf("%d ", n);