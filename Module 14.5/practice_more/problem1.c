// Question: Take a positive integer N as input and print the pattern shown in the sample input output.
#include <stdio.h>
int main()
{
    int n, s;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        s--;
        printf("\n");
    }
    return 0;
}