#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);
        int cap = 0, sml = 0, dgt = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                sml++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                dgt++;
            }
        }
        printf("%d %d %d\n", cap, sml, dgt);
    }

    return 0;
}