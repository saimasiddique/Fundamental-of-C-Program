#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[60], t[60];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s %s", s, t);
        int s_len, t_len, mx;
        s_len = strlen(s);
        t_len = strlen(t);
        if (s_len >= t_len)
        {
            mx = s_len;
        }
        else
        {
            mx = t_len;
        }
        for (int i = 0; i < mx; i++)
        {
            if (i < s_len)
            {
                printf("%c", s[i]);
            }
            if (i < t_len)
            {
                printf("%c", t[i]);
            }
            // printf("%c%c", s[i], t[i]);
        }
        printf("\n");
    }
    return 0;
}