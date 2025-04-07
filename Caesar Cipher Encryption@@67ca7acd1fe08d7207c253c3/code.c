// Your code here...
#include <ctype.h>
#include <string.h>
void caesarCipher(char a[100], int shift, char r[100])
{
    for(int i = 0; a[i] != '\0'; i++)
    {
        int n = a[i] + shift;
        if(isupper(a[i]))
        {
            if(n > 90)
            {
                r[i] = 65 + (90 - n);
            }
            else
            {
                r[i] = n;
            }
        }
        else if(islower(a[i]))
        {
            if(n > 122)
            {
                r[i] = 97 + (122 - n);
            }
            else
            {
                r[i] = n;
            }
        }
    }

    r[strlen(a)] = '\0';
}