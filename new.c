#include<stdio.h>
void step(int n)
{
if(n<0)
return;
else{
step(n-1);
step(n-2);

}
printf("%d", n);
}

int main()
{
int n;
printf("enter n");
scanf("%d",&n);
step(n);
return 0;
}