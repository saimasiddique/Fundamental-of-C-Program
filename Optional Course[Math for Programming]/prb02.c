// Find the binary representation for 73 ( a decimal number )
#include <stdio.h>
int main()
{
    int n, rem, bin = 0;
    scanf("%d", &n);
    while (n != 0)
    {

        rem = n % 2;
        bin = bin * 10 + rem;
        n = n / 2;
        // printf("%d\n", bin);
    }
    printf("\n%d", bin);
    return 0;
}