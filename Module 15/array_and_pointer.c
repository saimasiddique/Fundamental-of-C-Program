#include <stdio.h>
int main()
{
    int ar[5] = {3, 6, 8, 12, 9};
    printf("0th element address %p\n", &ar[0]);
    printf("0th element value %d\n", ar[0]);
    printf("0th element address %p\n", ar);
    printf("1st element value %d\n", *ar);
    printf("2nd element value %d\n", *(1 + ar));
    printf("2nd element value %d\n", 1 [ar]);
    printf("3rd element value %d\n", 2 [ar]);
    printf("4th element value %d\n", *(ar + 3));

    return 0;
}