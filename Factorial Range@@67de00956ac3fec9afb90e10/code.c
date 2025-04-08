// Your code here...

void factorialRange(int start, int end)
{
    if(start > end || start < 0 || end < 0) 
    {
        printf("Invalid range");
        return;
    }
    for(int i = start; i <= end; i++)
    {
        if(i == 0 || i == 1) 
        {
            printf("%d \n", 1);
            continue;
        }
        int answer = 1;
        for(int j = 1; j <= i; j++)
        {
            answer *= j;
        }

        printf("%d \n", answer);
    }
}