// Your code here...

#include <stdio.h>
#include <stdlib.h>

int cmpr(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(n == 1)
    {
        printf("%d", -1);
        return 0;
    }

    qsort(arr, n, sizeof(int), cmpr);
    int smallest = 999999;
    int first = 0;
    int second = 0;

    for(int i = 1; i < n; i++)
    {
        int curr = arr[i] - arr[i - 1];

        if(curr < smallest)
        {
            smallest = curr;
            if(arr[i] > arr[i - 1])
            {
                first = arr[i - 1];
                second = arr[i];
            }
            else
            {
                first = arr[i];
                second = arr[i - 1];
            }
        }
    }

    printf("%d %d", first, second);
    
}