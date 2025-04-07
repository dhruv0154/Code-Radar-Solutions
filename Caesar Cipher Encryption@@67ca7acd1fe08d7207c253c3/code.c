#include <ctype.h>
#include <string.h>

void caesarCipher(char a[100], int shift, char r[100])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (isupper(a[i]))
        {
            r[i] = ((a[i] - 'A' + shift) % 26) % 26 + 'A'; // handles negative shifts too
        }
        else if (islower(a[i]))
        {
            r[i] = ((a[i] - 'a' + shift) % 26) % 26 + 'a';
        }
        else
        {
            r[i] = a[i]; // non-alphabetic characters remain unchanged
        }
    }
    r[strlen(a)] = '\0'; // null-terminate result string
}
