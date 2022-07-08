// In Olympics, the countries are ranked by the total number of medals won. You are given six integers
//  G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals won by two different counties respectively. 
//  Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie 
// between the two countries.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r = 3, c = 6, i, j, count;

	int *arr[r];
	for (i=0; i<r; i++)
		arr[i] = (int *)malloc(c * sizeof(int));

	// Note that arr[i][j] is same as *(*(arr+i)+j)
	count = 0;
	for (i = 0; i < r; i++)
	for (j = 0; j < c; j++)
		scanf("%d",arr[i][j]); // Or *(*(arr+i)+j) = ++count

	for (i = 0; i < r; i++)
	for (j = 0; j < c; j++)
		printf("%d ", arr[i][j]);

	/* Code for further processing and free the
	dynamically allocated memory */

return 0;
}
