// Your code here...

void trackPlayerRanks(int *ranked, int n, int *player, int m, int *result)
{
    int rank = 1;
    int score = 0;

    for(int i = 0; i < m; i++)
    {
        score = player[i];
        for(int j = 0; j < n; j++)
        {
            if(score < ranked[j] && ranked[j] != ranked[j - 1]) rank++;
        }

        result[i] = rank;
        rank = 1;
    }
}