#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    int *ptr2 = ptr;
    printf("address of x %p\n", &x);
    printf("address of ptr %p\n", &ptr);
    printf("address of ptr2 %p\n", &ptr2);

    *ptr2 = 65;

    printf("value of x %d\n", x);
    printf("value of ptr %d\n", *ptr);
    printf("value of ptr2 %d\n", *ptr2);
    return 0;
}