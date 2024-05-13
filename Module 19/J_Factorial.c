#include <stdio.h>
long long int factorial(int a)
{
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int fact = factorial(n);
    printf("%lld\n", fact);
    return 0;
}