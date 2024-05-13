#include <stdio.h>
int func(int n)
{
    printf("1");
    for (int i = 2; i <= n; i++)
    {
        printf(" %d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}