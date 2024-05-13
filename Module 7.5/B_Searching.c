#include <stdio.h>
int main()
{
    int n, x, fl = 0, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            fl = 1;
            pos = i;
            break;
        }
    }
    if (fl == 1)
    {
        printf("%d\n", pos);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}