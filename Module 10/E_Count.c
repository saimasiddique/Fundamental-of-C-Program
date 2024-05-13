#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000000];
    int sum = 0;
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        sum += (s[i] - 48);
    }
    printf("%d", sum);
    return 0;
}