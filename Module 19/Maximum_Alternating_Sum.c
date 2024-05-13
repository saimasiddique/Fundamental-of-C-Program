#include <stdio.h>
#include <limits.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, ei, oi, so = 0, se = 0;
        scanf("%d", &n);
        int a[n], even_min = INT_MAX, odd_max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (i % 2)
            {
                if (a[i] >= odd_max)
                {
                    odd_max = a[i];
                    oi = i;
                }
                so += a[i];
            }
            else
            {
                if (a[i] <= even_min)
                {
                    even_min = a[i];
                    ei = i;
                }
                se += a[i];
            }
        }
        long long int sum = se - so;

        if (odd_max >= even_min)
        {
            sum = sum + 2 * (odd_max - even_min);
        }
        printf("%lld\n", sum);
    }

    return 0;
}
