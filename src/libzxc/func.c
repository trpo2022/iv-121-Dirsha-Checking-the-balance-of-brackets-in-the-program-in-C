#include "header.h"

int search (char* path)
{
    FILE *fp;
    fp = fopen(path, "r");
    char *buffer = malloc(255);
    int k = 0; 
    int q = 0;
    int w = 0;
    int e = 0;

    fgets(buffer, 255, fp);
    int i = 0;
    while(buffer[i] != '\n')
    {
        if (buffer[i] == '(')
        {
            k+=1;
        }
        if (buffer[i] == '[')
        {
            q+=1;
        }
        if (buffer[i] == '{')
        {
            w+=1;
        }
        if (buffer[i] == '<')
        {
            e+=1;
        }
        if (buffer[i] == ')')
        {
            k-=1;
        }
        if (buffer[i] == ']')
        {
            q-=1;
        }
        if (buffer[i] == '}')
        {
            w-=1;
        }
        if (buffer[i] == '>')
        {
            e-=1;
        }
        i++;
    }
    free(buffer);
    fclose(fp);

    if((k == 0) && (q == 0) && (w == 0) && (e == 0))
    {
        return 0;
    }
    else
    {
        return 1;
    } 
}
