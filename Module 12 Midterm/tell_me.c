#include <stdio.h>
int main()
{
    int t, n, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        scanf("%d", &x);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}