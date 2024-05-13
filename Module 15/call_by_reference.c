#include <stdio.h>
void fun(int *p)
{
    printf("value of p %p\n", p);
    *p = 200;
}
int main()
{
    int x = 100;
    printf("Address of x %p\n", &x);
    printf("value of x %d\n", x);
    fun(&x);
    printf("x value %d", x);
    return 0;
}