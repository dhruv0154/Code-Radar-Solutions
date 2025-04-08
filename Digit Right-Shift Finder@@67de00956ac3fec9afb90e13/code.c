// Your code here...
#include <stdlib.h>

int digitRightShift(int n)
{
    char s[40];

    int size = sprintf(s, "%d", n);
    char c = s[size - 1];
    for(int i = size - 1; i > 0; i--)
    {
       s[i + 1] = s[i];
    }
    s[0] = c;

    return atoi(s);
}