#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int f = 0;
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    f++;
                }
            }
            else if (i + j == n - 1)
            {
                if (ar[i][j] != 1)
                {
                    f++;
                }
            }
            else if (ar[i][j] != 0)
            {
                f++;
            }
        }
    }

    if (n != m || f > 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}