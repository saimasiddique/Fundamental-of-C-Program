#include <stdio.h>
int main()
{
    char ch, nxt;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", ch + 1);
    }

    return 0;
}