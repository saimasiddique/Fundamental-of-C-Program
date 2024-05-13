#include <stdio.h>
void number_print(int n)
{
    if (n == 1)
    {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    number_print(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    number_print(n);
    return 0;
}