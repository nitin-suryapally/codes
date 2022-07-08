#include<stdio.h>

int main(){
    char chara; 
// a-z value range is 97-122
//A-Z value range is 65-90

printf("enter the char :");
scanf("%c",chara);

if(chara>=97 && chara<=122){
    printf("the character is small letter");
}
else if(chara>=65 && chara<=90){
printf("the character is capital ");
}
return 0;
} 