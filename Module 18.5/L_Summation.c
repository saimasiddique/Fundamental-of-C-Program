#include <stdio.h>
long long int arr_sum(int a[], int n)
{
    if (n == 0)
        return a[n];
    return a[n] + arr_sum(a, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int s = arr_sum(a, n - 1);
    printf("%lld\n", s);
    return 0;
}