// Your code here...

void trackPlayerRanks(int *ranked, int n, int *player, int m, int *result)
{
    int rank = 0;
    int score = 0;

    for(int i = 0; i < n; i++)
    {
        score += player[i];
        for(int j = 0; j < m; j++)
        {
            if(score < ranked[j]) rank++;
        }

        result[i] = rank;
        rank = 1;
    }
}