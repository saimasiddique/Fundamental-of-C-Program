#include <stdio.h>
int minus(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a - b;
}
int main()
{
    printf("%d", minus());
    return 0;
}