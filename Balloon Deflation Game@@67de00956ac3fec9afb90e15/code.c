// Your code here...

void deflateBallons(int *air, int n)
{
    int k = 0;
    int smallestNumber = 99999;
    for(int i = 0; i < n; i++)
    {
        if(air[i] <= 0) k++;
    }
    printf("%d", k);

    for(int i = 0; i < n; i++)
    {
        k = 0;
        for(int k = 0; k < n; k++)
        {
            if(arr[i] < smallestNumber) smallestNumber = arr[i];
        }
        for(int j = 0; j < n; j++)
        {
            arr[i] -= smallestNumber;
        }

        for(int s = 0; s < n; s++)
        {
            if(arr[s] <= 0) n++;
        }

        printf("%d", k);
    }
}