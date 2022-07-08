#include<stdio.h>
void copy(char*ptr, int n){
char st2[20];
int j=0;
for(int i=0; i<n; i++){
    st2[i]=(*(ptr +j));
    j++;
}
st2[j]='\0';
// st2[j-1]='\0';
printf("%s",st2);
}
int main(){
char st1[]="nitin";
char*j;
j=&st1[0];
copy(j, 5);
return 0;
}