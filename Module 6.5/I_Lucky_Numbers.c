#include <stdio.h>
int main()
{
    int n, r;
    scanf("%d", &n);
    r = n % 10;
    n /= 10;
    if (r % n == 0 || n % r == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}