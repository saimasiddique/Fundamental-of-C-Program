#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    int sz, count = 0;
    // method-01
    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // method-02
    // int i = 0;
    // while (ch[i] != 0)
    // {
    //     count++;
    //     i++;
    // }

    // printf("%d", count);

    // method-03
    sz = strlen(ch);
    printf("%d", sz);

    return 0;
}