#include <stdio.h>
int main()
{
    int k, r, cost;
    scanf("%d %d", &k, &r);
    int i = 1;
    while (1)
    {
        cost = k * i;
        if (cost % 10 == 0 || cost % 10 == r)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}