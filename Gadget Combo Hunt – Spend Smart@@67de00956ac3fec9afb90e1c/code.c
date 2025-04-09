// Your code here...
int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget)
{
    int ans = -1;

    for(int i = 0; i < n; i++)
    {
        int current = keyboards[i];

        for(int j = 0; j < m; j++)
        {
            if(current + headsets[j] > ans && current + headsets[j] <= budget)
            {
                ans = current + headsets[j];
            }
        }
    }

    return ans;
}