#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,c=0,j=0;
    char*s=(char*)malloc(100*(sizeof(char)));
    scanf("%[^\n]",s);
    s = realloc(s, strlen(s) + 1);
    int l=strlen(s);
    for(j=0; j<l; j++){
    for(i=0; i<l; i++){
        if(s[i]==s[j]){
            c++;
        }
            
    }   
    printf("%d ",c); 
    c=0;
    }     
    return 0;
}
