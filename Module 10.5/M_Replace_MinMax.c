#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n], m, x;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (ar[i] <= mn)
        {
            mn = ar[i];
            m = i;
        }
        if (ar[i] >= mx)
        {
            mx = ar[i];
            x = i;
        }
        // printf("%d %d\t %d %d\n", mn, m, mx, x);
    }

    ar[m] = mx;
    ar[x] = mn;
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", ar[i]);
    }

    return 0;
}