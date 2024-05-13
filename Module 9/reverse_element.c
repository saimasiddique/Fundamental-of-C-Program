#include <stdio.h>
int main()
{
    int n, p, q, temp;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    p = 0, q = n - 1;
    while (p < q)
    {
        temp = ar[p];
        ar[p] = ar[q];
        ar[q] = temp;
        p++;
        q--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}