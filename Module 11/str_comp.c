#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // method-01
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same string");
    //         break;
    //     }

    //     else if (a[i] == '\0')
    //     {
    //         printf("A is small string\n");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is small string\n");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("B is small string\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("A is small string");
    //         break;
    //     }
    // }

    // method-02
    // int val = strcmp(a, b);
    // if (val > 0)
    // {
    //     printf("A is large string\n");
    // }
    // else if (val < 0)
    // {
    //     printf("B is larger\n");
    // }
    // else
    // {
    //     printf("Same");
    // }

    return 0;
}