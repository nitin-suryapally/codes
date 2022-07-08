#include<stdio.h>

int main(){
int st1[20];
int st2[20];
char c;
int i=0;

printf("enter the first string :\n");
scanf("%s",st1);
printf("enter the string 2 character by character :\n");


while(c!='\n'){
    fflush(stdin);
    scanf("%c",&c);
     st2[i]=c;
     i++;
}
st2[i-1]='\0';
printf("the first string is %s \n",st1);
printf("the second  string is %s \n",st2);

return 0;
}