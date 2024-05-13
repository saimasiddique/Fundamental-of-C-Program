#include <stdio.h>
#include <string.h>

void fun(char str[])
{
    int len = strlen(str);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%c ", str[i]);
    }
}
int main()
{
    char str[20] = "Hello";
    fun(str);
    return 0;
}