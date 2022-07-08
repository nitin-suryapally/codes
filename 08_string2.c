#include<stdio.h>
int strlen(char*j){
    int lenght=0;
    while((*j)!='\0'){
        lenght++;
        j++;
    }
    return lenght;
}
int main(){
char st[]="nitin";
char*ptr;
int l;
ptr=&st[0];
l=strlen(ptr);
printf("%d",l);
return 0;
}