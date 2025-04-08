// Your code here...
#include <stdlib.h>

int digitRightShift(int n)
{
    char s[40];

    int size = sprintf(s, "%d", n);
    printf("%s \n", s);
    printf("%d \n", size);

    for(int i = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            int temp = s[0];
            s[0] = s[size - 1];
            s[size - 1] = temp;
            break;
        }
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }

    return atoi(s);
}