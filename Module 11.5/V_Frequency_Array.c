#include <stdio.h>
int main()
{
    int n, m, ind;
    scanf("%d %d", &n, &m);
    int ar[n];
    int freq[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        ind = ar[i];
        freq[ind]++;
    }
    for (int j = 1; j <= m; j++)
    {
        printf("%d\n", freq[j]);
    }

    return 0;
}