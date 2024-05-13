// 1101011 is a binary number. Find its equivalent decimal number.
#include <stdio.h>
#include <math.h>
int main()
{
    int bin, rem, dec = 0, i = 0;
    scanf("%d", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        dec += rem * pow(2, i);
        bin /= 10;
        i++;
    }
    printf("%d", dec);

    return 0;
}