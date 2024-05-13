#include <stdio.h>

int main()
{
    long long int n, m, k, min = 0, cnt = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n <= m && n <= k)
    {
        min = n;
    }
    else if (m <= n && m <= k)
    {
        min = m;
    }
    else
    {
        min = k;
    }
    cnt += cnt + min;
    n -= min;
    m -= min;
    k -= min;
    if ((n / 2) <= k)
    {
        cnt += (n / 2);
    }
    else
    {
        cnt += k;
    }
    printf("%lld\n", cnt);
    return 0;
}
