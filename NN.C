#include <stdio.h>
#include <math.h>

int main()
{
    int tree[20];

    int i, n, h, temp;
    printf("Enter no of nodes in the tree : ");
    scanf("%d", &n);
    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        tree[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]);
    }
    i = 1;
    h = 0;

    while (tree[i] != 0)
    {
        h++;
        i = (2 * i) + 1;
    }

    printf("Height of the tree = %d", h);
    printf("\nMaximum Path Length = %d\n", h);

    i = 0;
    while (h - 1 >= 0)
    {
        i = i + pow(2, h - 1);
        h--;
    }

    printf("\nLeaf nodes are as follows:\n");
    while (tree[i] != 0)
    {
        temp = tree[i];
        printf("%d\n", temp);
        i++;
    }

    return 0;
}
