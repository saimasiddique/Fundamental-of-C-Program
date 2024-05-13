#include <stdio.h>
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int ar[4], a, b, c;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }
    a = ar[0], b = ar[1], c = ar[2];
    sort(ar, 3);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}