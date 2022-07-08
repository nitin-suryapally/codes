#include<stdio.h>
#include<math.h>

int main(){
    int n;
int tree[50];
printf("enter the number of nodes in the tree : \n");
scanf("%d",&n);

for(int i=0; i<n; i++){
    tree[i]=0;
}
 printf("enter the elemets in the tree : \n");
for(int j=0; j<n; j++){
    printf("enter %d element :\n",j+1);
    scanf("%d",&tree[j]);
}

int i=0; 
int h=0;

while(tree[1]!=0){
    h++; 
    i=((2*i)+1);
}

printf("the height of the tree %d \n",h);
printf("the lognest path length is %d \n ",h);

i=0;

return 0;
}