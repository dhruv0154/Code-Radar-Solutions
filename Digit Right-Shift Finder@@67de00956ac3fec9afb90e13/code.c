// Your code here...
#include <stdlib.h>

int digitRightShift(int n)
{
    char s[40];

    int size = sprintf(s, "%d", n);
    for(int i = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            int temp = s[0];
            s[0] = s[size - 1];
            s[size - 1] = temp;
            break;
        }
        char temp = s[i + 1];
        s[i + 1] = s[i];
        s[i] = temp;
    }

    return atoi(s);
}