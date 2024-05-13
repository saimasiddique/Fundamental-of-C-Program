#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'P')
            {
                p++;
            }
            else if (str[i] == 'T')
            {
                t++;
            }
        }

        if (p > t)
        {
            printf("Pathaan\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}