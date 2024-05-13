#include <stdio.h>
int main()
{
    int n, rev = 0, rem, tmp;
    scanf("%d", &n);
    tmp = n;
    while (tmp != 0)
    {
        rem = tmp % 10;
        rev = rev * 10 + rem;
        tmp /= 10;
    }
    printf("%d\n", rev);
    if (rev == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}