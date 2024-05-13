#include <stdio.h>
int main()
{
    int t, n, r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        do
        {
            r = n % 10;
            n /= 10;
            printf("%d ", r);
        } while (n != 0);
        printf("\n");
    }

    return 0;
}