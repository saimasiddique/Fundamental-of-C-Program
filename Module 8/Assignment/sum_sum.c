#include <stdio.h>
int main()
{
    int n, v, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if (v > 0)
        {
            pos += v;
        }
        else
        {
            neg += v;
        }
    }
    printf("%d %d\n", pos, neg);
    return 0;
}