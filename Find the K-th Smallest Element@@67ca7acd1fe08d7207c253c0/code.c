// Your code here...
#include <stdlib.h>

int cmpr(const void* a, const void* b)
{
    return (*(int *)a - *(int *)b);
}

int kthSmallest(int arr[], int n, int k)
{
    qsort(arr, n, sizeof(int), cmpr);
    if(k > n) return -1;
    return arr[k - 1];
}