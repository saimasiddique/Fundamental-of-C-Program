#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, pd = 0, sd = 0;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pd += ar[i][j];
            }
            if ((i + j) == (n - 1))
            {
                sd += ar[i][j];
            }
        }
    }
    int diff = abs(pd - sd);
    printf("%d\n", diff);
    return 0;
}