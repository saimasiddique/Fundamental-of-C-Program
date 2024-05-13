// Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that.Absolute value means if the value is negative it will be converted to positive value.Then print the value in the main function.

#include <stdio.h>
int my_abs(int a)
{
    if (a < 0)
        return -a;
    else
        return a;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d",my_abs(a));
     return 0;
}
