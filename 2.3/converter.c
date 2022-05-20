#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void translator(char hexString[]);

int main()
{
    translator("1kn");

    return 0;
}

void translator(char hexString[])
{
    int summary = 0, i, len, index = 0;

    len = strlen(hexString);
    for (i = len - 1; i >= 0; i--)
    {
        if (hexString[i] >= '0' && hexString[i] <= '9')
        {
            summary = summary + (hexString[i] - 48) * pow(16, index);
            index++;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            summary = summary + (hexString[i] - 55) * pow(16, index);
            index++;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f')
        {
            summary = summary + (hexString[i] - 87) * pow(16, index);
            index++;
        }
    }
    printf("%s = %d (Decimal)", hexString, summary);
}