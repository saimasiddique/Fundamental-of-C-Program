#include <stdio.h>
int main()
{
    int n, vl, mx = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vl);
        if (mx < vl)
        {
            mx = vl;
        }
    }
    printf("%d\n", mx);
    return 0;
}