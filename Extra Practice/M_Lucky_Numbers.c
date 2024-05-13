#include <stdio.h>
int main()
{
    int a, b, rem, cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int j = i, fl;
        while (j != 0)
        {
            rem = j % 10;
            if (rem == 4 || rem == 7)
            {
                fl = 1;
                // printf("%d %d %d\n", j, fl, rem);
                //  break;
            }
            else
            {
                fl = 0;
                break;
            }
            j /= 10;
        }
        if (fl == 1)
        {
            cnt++;
            printf("%d ", i);
        }
    }
    if (cnt == 0)
    {
        printf("-1\n");
    }

    return 0;
}