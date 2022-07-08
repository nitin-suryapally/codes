#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *initialize(int data)
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

void search(int value, struct node *root)
{
	int c = 0;
	struct node *d = root;
	while (d)
	{
		if (d->data == value)
		{
			c = 1;
			break;
		}
		else if (value > d->data)
		{
			d = d->right;
		}
		else if (value < d->data)
		{
			d = d->left;
		}
	}
	if (c == 0)
	{
		printf("Error 404: Element not found");
	}
	else
	{
		printf("Element is present in the tree");
	}
}

void traversalin(struct node *root)
{
	if (root == NULL)
		return;
	traversalin(root->left);
	printf("%d ", root->data);

	traversalin(root->right);
}
void traversalpre(struct node *root)
{
	if (root == NULL)
		return;
	printf("%d ", root->data);

	traversalpre(root->left);

	traversalpre(root->right);
}
void traversalpost(struct node *root)
{
	if (root == NULL)
		return;
	traversalpost(root->left);

	traversalpost(root->right);
	printf("%d ", root->data);
}

int main()
{

	int n, i, temp, value, element, c;
	int p = 1;

	printf("Enter the number of terms in the tree: ");
	scanf("%d", &n);

	printf("Enter the root value: ");
	scanf("%d", &value);

	struct node *root = initialize(value);
	for (i = 0; i < n - 1; i++)
	{
		struct node *d = root;
		printf("Enter the element: ");
		scanf("%d", &temp);
		while (d)
		{
			if (temp > (d->data))
			{
				if (d->right == NULL)
				{
					d->right = initialize(temp);
					break;
				}
				else
				{
					d = d->right;
				}
			}
			else
			{
				if (d->left == NULL)
				{
					d->left = initialize(temp);
					break;
				}
				else
				{
					d = d->left;
				}
			}
		}
	}
	while (p == 1)
	{
		printf("\nEnter 1 to search the tree");
		printf("\nEnter 2 to inorder traverse the tree");
		printf("\nEnter 3 to preorder traverse the tree");
		printf("\nEnter 4 to postorder traverse the tree\n");
		scanf("%d", &c);
		switch (c)
		{

		case 1:
			printf("\nEnter element to be searched: \n");
			scanf("%d", &element);
			search(element, root);
			break;
		case 2:
			traversalin(root);
			break;
		case 3:
			traversalpre(root);
			break;
		case 4:
			traversalpost(root);
			break;
		default:
			printf("Invalid choice");
			break;
		}

		printf("enter 1 to continue and 0 to exit \n ");
		scanf("%d", &p);
	}
	return 0;
}
