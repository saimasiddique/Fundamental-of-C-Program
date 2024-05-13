#include <stdio.h>
#include <limits.h>
int main()
{
    int n, val, max = INT_MIN;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (max <= ar[i])
        {
            max = ar[i];
        }
    }
    max += 1;
    // printf("%d", max);

    int cnt[max];
    for (int i = 0; i < max; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cnt[ar[i]]++;
        // printf("cnt indx: %d- val:%d\n", ar[i], cnt[ar[i]]);
    }
    for (int i = 0; i < max; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%d - %d\n", i, cnt[i]);
        }
    }
    return 0;
}