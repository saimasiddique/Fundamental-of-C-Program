#include <stdio.h>
int main()
{
    int t, m1, m2, d1, d2, d_less, t_m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &m1, &m2, &d1);
        t_m = m1 + m2;
        d2 = (m1 * d1) / t_m;
        // printf("%d- ", d2);
        d_less = d1 - d2;
        printf("%d\n", d_less);
    }

    return 0;
}