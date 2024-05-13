#include <stdio.h>
void p_rec(int a)
{
    if (a == 0)
        return;
    printf("I love Recursion\n");
    p_rec(a - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    p_rec(n);
    return 0;
}