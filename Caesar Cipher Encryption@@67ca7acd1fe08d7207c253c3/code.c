// Your code here...
#include <cctype>
void caesarCipher(char a[100], int shift, char r[100])
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        int n = a[i] + shift;
        if(isupper(a[i]))
        {
            if(n > 90)
            {
                a[i] = 65 + (90 - n);
            }
            else
            {
                a[i] = n;
            }
        }
        else if(islower(a[i]))
        {
            if(n > 122)
            {
                a[i] = 97 + (122 - n);
            }
            else
            {
                a[i] = n;
            }
        }
    }
}