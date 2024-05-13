#include <stdio.h>
int main()
{
    int n, m, idx;
    scanf("%d %d", &n, &m);
    int a[n], b[m], ans[n + m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n + m; i++)
    {
        ans[i] = a[i];
    }
    idx = n;
    for (int j = 0; j < m; j++)
    {
        ans[idx] = b[j];
        idx++;
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}