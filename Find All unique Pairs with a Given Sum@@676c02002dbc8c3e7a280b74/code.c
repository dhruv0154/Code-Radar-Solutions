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
        
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                result[k][0] = arr[i];
                result[k][1] = arr[j];
                k++;
            }
        }
    }

    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}