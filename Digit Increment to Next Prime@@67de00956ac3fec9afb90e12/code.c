// Your code here...

int incrementToPrimeDigits(int n)
{
    int ans = 0;
    while(n > 0)
    {
        int k = n % 10;
        k %= 7;
        while(k != 2 && k != 3 && k != 5 && k != 7)
        {
            k++;
        }
        ans += k * 10;
        n /= 10;
    }

    return ans;
}