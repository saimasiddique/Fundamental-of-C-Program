#include <stdio.h>
int main()
{
    int n, arr[1000], min, pos = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d\n", min, pos + 1);
    return 0;
}
