#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m, a, b, c, d;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long tmp = a * b * c;
        d = -1;
        if (m % tmp == 0)
        {
            d = m / tmp;
        }
        printf("%lld\n",d);
    }
    return 0;
}