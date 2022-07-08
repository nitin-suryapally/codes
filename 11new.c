#include <stdio.h>
void bSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void insertionSort(int a[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void selectionSort(int a[], int n)
{
    int min;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void heapify(int a[], int n, int i)
{
    int temp, large = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[large])
    {
        large = l;
    }
    if (r < n && a[r] > a[large])
    {
        large = r;
    }
    if (large != i)
    {
        temp = a[i];
        a[i] = a[large];
        a[large] = temp;
        heapify(a, n, large);
    }
}
void heapsort(int a[], int n)
{
    int temp;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        heapify(a, i, 0);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    int a[n];
    printf("enter the size of array : \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d ", i + 1);
        scanf("%d", &a[i]);
    }
    int c;
    while (c == 1)
    {
        int k;
        printf(" enter \n 1.bubblesort \n 2.insertionsort\n 3.selectionsort\n 4.heapsort\n :");
        printf("enter the number \n :");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            bSort(a, n);
            break;
        case 2:
            insertionSort(a, n);
            break;
        case 3:
            selectionSort(a, n);
            break;
        case 4:
            heapify(a, n, 0);
            heapsort(a, n);
            break;

        default:
            printf("enter a valid number ");
            break;
        }
        printf("to continue the select 1 : \n ");
        scanf("%d", &c);
    }

    return 0;
}
