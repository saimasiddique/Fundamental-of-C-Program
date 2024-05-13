#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char s[n];

    scanf("%s", s);

    for (int i = 0; i < n; i++)
    {
        // printf("%c", s[i]);
        sum = sum + s[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}