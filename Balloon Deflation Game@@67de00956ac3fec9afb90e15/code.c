// Your code here...

void deflateBalloons(int *air, int n)
{
    int r = 0;
    int smallestNumber = 99999;
    for(int i = 0; i < n; i++)
    {
        if(air[i] >= 0) r++;
    }
    printf("%d \n", r);

    for(int i = 0; i < n; i++)
    {
        r = 0;
        for(int k = 0; k < n; k++)
        {
            if(air[k] < smallestNumber) smallestNumber = air[i];
        }
        for(int j = 0; j < n; j++)
        {
            air[j] -= smallestNumber;
        }

        for(int s = 0; s < n; s++)
        {
            if(air[s] >= 0) r++;
        }

        printf("%d \n", r);
    }
}