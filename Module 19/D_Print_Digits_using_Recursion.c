#include <stdio.h>
void digits_of_number(int n)
{
    if (n == 0)
    {
        // printf("%d ", n);
        return;
    }

    digits_of_number(n / 10);
    printf("%d ", n % 10);
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n < 10)
        {
            printf("%d", n);
        }
        else
        {
            digits_of_number(n);
        }

        printf("\n");
    }

    return 0;
}