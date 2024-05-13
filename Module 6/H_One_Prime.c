#include <stdio.h>
int main()
{
    int n, fl = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            fl = 1;
            break;
        }
    }
    if (fl == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}