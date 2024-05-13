#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x;
    scanf("%d", &x);
    int flag = 0, indx1, indx2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] + ar[j] == x)
            {
                indx1 = i;
                indx2 = j;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES , %d + %d = %d\n", ar[indx1], ar[indx2], x);
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}