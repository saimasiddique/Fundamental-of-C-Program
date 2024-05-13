#include <stdio.h>
#include <string.h>
int main()
{
    char str[110];
    int t, len;
    scanf("%d", &t);
    // getchar();
    for (int i = 1; i <= t; i++)
    {
        // fgets(str, 110, stdin);
        //  scanf("%s", str);
        len = strlen(str);
        if (len > 10)
        {
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}