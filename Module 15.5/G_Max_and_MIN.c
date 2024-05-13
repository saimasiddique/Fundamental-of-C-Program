#include <stdio.h>
#include <limits.h>
int min(int a[], int n)
{
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mn > a[i])
        {
            mn = a[i];
        }
    }
    return mn;
}
int max(int a[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
        }
    }
    return mx;
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
    int mn = min(ar, n);
    int mx = max(ar, n);
    printf("%d %d\n", mn, mx);
    return 0;
}