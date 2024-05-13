#include <stdio.h>
int main()
{
    char ch[5];
    int a[5], sz1, sz2;
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", ch[i]);
    }
    sz1 = sizeof(ch) / sizeof(char);
    printf("%d\n", sizeof(ch));

    sz2 = sizeof(a) / sizeof(int);
    printf("%d", sizeof(a));

    return 0;
}