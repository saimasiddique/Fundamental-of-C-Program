#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000000];
    gets(s);
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    // printf("%s", s);
    return 0;
}