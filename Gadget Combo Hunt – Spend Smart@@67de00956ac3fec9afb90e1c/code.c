#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort (ascending order)
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Custom binary search: finds the max headset price <= remaining budget
int binarySearch(int headsets[], int size, int remaining) {
    int low = 0, high = size - 1, best = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (headsets[mid] <= remaining) {
            best = headsets[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return best;
}

int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) {
    qsort(headsets, m, sizeof(int), compare);

    int ans = -1;

    for (int i = 0; i < n; i++) {
        int remaining = budget - keyboards[i];
        if (remaining < 0) continue;

        int bestHeadset = binarySearch(headsets, m, remaining);

        if (bestHeadset != -1) {
            int total = keyboards[i] + bestHeadset;
            if (total > ans)
                ans = total;
        }
    }

    return ans;
}
