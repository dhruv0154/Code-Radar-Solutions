// Your code here...

int incrementToPrimeDigits(int n)
{
    int ans = 0;
    int place = 1;
    while(n > 0)
    {
        int k = n % 10;
        k %= 8;
        while(k != 2 && k != 3 && k != 5 && k != 7)
        {
            k++;
        }
        ans += k * place;
        place *= 10;
        n /= 10;
    }

    return ans;
}