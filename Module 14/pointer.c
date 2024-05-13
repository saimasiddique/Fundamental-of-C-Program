#include <stdio.h>
int main()
{
    int x = 10;
    printf("%p\n", x);
    int *p;
    p = &x;
    printf("%d", *p);
    return 0;
}