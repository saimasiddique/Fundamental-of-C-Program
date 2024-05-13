#include <stdio.h>
void number_print(int n)
{
    if (n == 0)
        return;
    number_print(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    number_print(n);
    return 0;
}