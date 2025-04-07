// Your code here...

int incrementToPrimeDigits(int n)
{
    int ans = 0;
    int place = 1;
    while(n > 0)
    {
        int k = n % 10;
        if(k == 5 || k == 3 || k == 7) k += 2;
        if(k == 2) k += 1;
        while(k != 2 && k != 3 && k != 5 && k != 7 && k < 10)
        {
            k++;
        }
        if(k >= 10) k = 2;
        ans += k * place;
        place *= 10;
        n /= 10;
    }

    return ans;
}