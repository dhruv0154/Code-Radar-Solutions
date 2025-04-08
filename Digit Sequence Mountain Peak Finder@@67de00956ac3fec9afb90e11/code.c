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
        if(atoi(s[i]) > greatest)
        {
            greatest = atoi(s[i]);
            index = i;
        }
    }

    for(int j = i; j >= 0; j++)
    {
        if(j == 0) break;
        if(atoi(s[j]) < atoi[s[j - 1]]) 
        {
            peak = false;
            greatest = -1;
        }
    }

    if(!peak) return greatest;

    for(int j = 0; j < size; j++)
    {
        if(j == size - 1) return;
        if(atoi(s[j]) < atoi(s[j + 1]))
        {
            peak = false;
            greatest = -1;
        }
    }

    return greatest;
}