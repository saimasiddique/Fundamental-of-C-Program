#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        long long int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        if (n == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("%lld\n", fact);
        }
    }

    return 0;
}