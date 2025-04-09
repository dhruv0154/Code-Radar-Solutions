// Your code here...
#include <stdio.h>
#include <stdlib.h>

int cmpr(const void* a, const void* b) return (*(int*)a - *(int*)b);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmpr);

    for(int i = 0; i < n; i++)
    {
        if(i == n - 1) 
        {
            printf("%d", arr[i] + 1);
            return 0;
        }
        if(arr[i] > 0)
        {
            if(arr[i] + 1 != arr[i + 1]) 
            {
                printf("%d", arr[i] + 1);
                return 0;
            }
        }
    }
}