#include<stdio.h>
#include<math.h>

int main(){
	int tree[100];
	int i,n,h,temp,ch;
	printf("Enter no of nodes in the tree : "); 
	scanf("%d", &n);
	printf("Enter the elements:\n");
	
	for(i=0;i<100;i++){
		tree[i]=0;
	}
	
	for(i=0;i<n;i++){
		scanf("%d", &tree[i]);
	}
	i=1;
	h=0;
	
	while(tree[i]!=0){
	   h++;
	   i=(2*i)+1;	
	}
	
	printf("Height of the tree = %d",h);
	
	
	i=0;
	ch=tree[(2*i)+1];
	while(ch!=0){
		i++;
		ch=tree[(2*i)+1];
	}
	
	printf("Leaf nodes are as follows:\n");
	
	while(tree[i]!=0){
		temp = tree[i];
		printf("%d",temp);
		i++;
	}
	
	return 0;
}

