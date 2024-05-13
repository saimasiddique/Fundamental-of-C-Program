#include <stdio.h>
int main()
{
    int t, key, f;
    scanf("%d", &t);
    while (t--)
    {
        f = 0;
        scanf("%d", &key);
        int ar[4];
        ar[0]=0;
        for (int i = 1; i < 4; i++)
        {
            scanf("%d", &ar[i]);
        }
        while (key != 0)
        {
            key = ar[key];
            f++;
            // printf("%d %d\n", key, ar[key]);
        }

        if (f == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}