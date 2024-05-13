#include <stdio.h>
void fun(int x)
{
    printf("the address of x is %p\n", &x);
    x = 200;
    printf("x value in function %d\n", x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("the address of x is %p\n", &x);
    x = 34;
    printf("x value %d\n", x);
    return 0;
}