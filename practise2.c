// In this challenge, create an array of size  dynamically, and read the values from stdin.
// Iterate the array calculating the sum of all elements. Print the sum and free the memory where
//  the array is stored.While it is true that you can sum the elements as they are read, without
//  first storing them to an array,but you will not get the experience working with an array.
//   Efficiency will be required later.

//   Input Format

// The first line contains an integer, .
// The next line contains  space-separated integers.

// Constraints

// Output Format

// Print the sum of the integers in the array.

// Sample Input 0

// 6
// 16 13 7 2 1 12
// Sample Output 0

// 51

// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *arr;
    scanf("%d", &n);
    if (n >= 1000 || n <= 1)
    {
        return 0;
    }

    arr = (int *)malloc(n * (sizeof(int)));
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 1000)
        {
            return 0;
        }
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}