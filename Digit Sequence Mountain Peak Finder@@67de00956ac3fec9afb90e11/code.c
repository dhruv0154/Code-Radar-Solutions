// Your code here...
#include <stdbool.h>
#include <stdlib.h> 

int mountainPeak(int n)
{
    int greatest = 0;
    bool peak = false;
    int index = 0;

    char s[50];

    int size = sprintf(s, "%d", n);
    for(int i = 0; i < size; i++)
    {
        if(s[i] - '0' > greatest)
        {
            greatest = s[i] - '0';
            index = i;
        }
    }

    for(int j = index; j >= 0; j++)
    {
        if(j == 0) break;
        if(s[j] - '0' < s[j - 1] - '0') 
        {
            peak = false;
            greatest = -1;
        }
    }

    if(!peak) return greatest;

    for(int j = index; j < size; j++)
    {
        if(j == size - 1) return;
        if(s[j] - '0' < s[j + 1] - '0')
        {
            peak = false;
            greatest = -1;
        }
    }

    return greatest;
}