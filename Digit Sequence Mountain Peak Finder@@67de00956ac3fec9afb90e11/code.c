// Your code here...
#include <stdbool.h>
#include <stdlib.h> 

int mountainPeak(int n)
{
    int greatest = 0;
    bool peak = true;
    int index = 0;

    char s[50];

    int size = sprintf(s, "%d", n);

    if(size < 3) return  -1;
    for(int i = 0; i < size; i++)
    {
        if(s[i] - '0' > greatest)
        {
            greatest = s[i] - '0';
            index = i;
        }
    }

    if (index == 0 || index == size - 1) return -1;


    for(int j = index; j >= 0; j++)
    {
        if(j == 0) break;
        if(s[j] - '0' < s[j - 1] - '0') 
        {
            peak = false;
            greatest = -1;
            break;
        }
    }

    if(!peak) return greatest;

    for(int j = index; j < size - 1; j++)
    {
        if(s[j] - '0' < s[j + 1] - '0')
        {
            peak = false;
            greatest = -1;
            break;
        }
    }

    return greatest;
}