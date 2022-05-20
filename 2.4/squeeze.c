#include <stdio.h>

void squeeze(char[], char[]);

int main(void)
{
    char s1[100] = {"SandroGalogre9"};
    char s2[100] = {"9"};

    squeeze(s1, s2);
    printf("%s\n", s1);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    p = 0;
    for (i = 0; s1[i] != '\0'; ++i)
    {
        for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; ++j)
            ;
        if (s2[j] == '\0')
            s1[p++] = s1[i];
    }
    s1[p] = '\0';
}
