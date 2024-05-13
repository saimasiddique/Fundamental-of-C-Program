#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2)
    {

        int tree[n];
        int leaf_line = 6;
        for (int i = 0; i < n + 1; i++)
        {
            if (i % 2)
            {
                tree[i] = leaf_line;
                leaf_line++;
            }
            else
            {
                tree[i] = 0;
            }
        }
        // for (int i = 0; i < n + 1; i++)
        // {
        //     printf("%d\n", tree[i]);
        // }

        int line = tree[n];
        // printf("%d\n", line);

        // treeleaf
        int s = line - 1;
        int k = 1;
        for (int i = 1; i <= line; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            s--;
            k += 2;
            printf("\n");
        }

        // treelog
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}