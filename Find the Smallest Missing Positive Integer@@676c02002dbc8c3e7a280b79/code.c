// Your code here...
#include <stdio.h>
#include <stdlib.h>

int cmpr(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

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

    int smallest = 1;

    for(int i = 0; i < n; i++)
    {
       if(arr[i] == smallest)
       {
            smallest++;
       }
       else if(arr[i] > smallest) break;
    }

    printf("%d", smallest);
}