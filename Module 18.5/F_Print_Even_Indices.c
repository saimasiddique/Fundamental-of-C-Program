#include <stdio.h>
void even_index(int a[], int n)
{
    if (n == 0)
    {
        printf("%d ", a[n]);
        return;
    }
    if (n % 2 == 0)
    {
        printf("%d ", a[n]);
    }

    return even_index(a, n - 1);
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
    even_index(ar, n - 1);
    return 0;
}