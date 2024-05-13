#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            two++;
        }
        else if (ar[i] % 3 == 0)
        {
            three++;
        }
    }
    printf("%d %d\n", two, three);

    return 0;
}