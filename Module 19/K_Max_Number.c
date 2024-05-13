#include <stdio.h>
int max_number(int a[], int n, int m)
{
    if (n == 0)
    {
        if (a[n] >= m)
        {
            m = a[n];
        }
        // printf("%d\n", m);
        return m;
    }
    if (a[n] >= m)
    {
        m = a[n];
    }
    // printf("%d\n", m);
    return max_number(a, n - 1, m);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int m = ar[0];

    max_number(ar, n - 1, m);
    int larg = max_number(ar, n - 1, m);
    printf("%d\n", larg);
    return 0;
}