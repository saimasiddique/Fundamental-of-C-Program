#include <stdio.h>
int main()
{
    int n, pos, val;

    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = val;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}