// Your code here...
#include <stdio.h>
int main()
{
    int arr[100];
    int result[100][2];

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                arr[k][0] = arr[i];
                arr[k][1] = arr[j];
                k++;
            }
        }
    }

    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}