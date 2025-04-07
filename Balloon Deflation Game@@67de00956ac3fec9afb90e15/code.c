#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void deflateBalloons(int *air, int n) {
    qsort(air, n, sizeof(int), cmp);

    int total = n;

    printf("%d\n", total);  // First count (before any cuts)

    for (int i = 1; i < n; i++) 
    {
        if(arr[i] == 0) return;
        // If this element is greater than the one before it, it's a new cut level
        if (air[i] > air[i - 1]) {
            printf("%d\n", n - i);  // Remaining elements
        }
    }
}