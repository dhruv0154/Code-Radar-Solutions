// Your code here...

int totalLikes(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 2;

    int ans = 2;
    int next = 2;
    for(int i = 2; i <= n; i++)
    {
        int k = next * 3;
        k /= 2;
        ans += k;
        next = k;
    }

    return ans;
}