#include <stdio.h>
#include <string.h>
int main()
{
    char a[40], b[40];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    // printf("%d", val);

    if (val > 0)
    {
        printf("%s", b);
    }
    else if (val <= 0)
    {
        printf("%s", a);
    }

    return 0;
}