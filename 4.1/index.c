#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

int getLine(char[], int);
int stringindex(char[], const char[]);

int main(void)
{
    char line[MAXLEN];
    const char pattern[] = "luka";
    int position;
    while (getLine(line, MAXLEN) > 0)
        if ((position = stringindex(line, pattern)) < 0)
            printf("ver moidzebna\n");
        else
            printf("%i\n", position);
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';

    return i;
}

int stringindex(char s[], const char t[])
{
    int i, j, k;

    for (i = strlen(s) - strlen(t); i >= 0; --i)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}