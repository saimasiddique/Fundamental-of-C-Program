#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    // printf("%s", a);
    // for (int i = 0; i < strlen(a); i++)
    // {
    //     printf("%c ", a[i]);
    // }
    int value, cnt[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        value = a[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }
    printf("\n");

    for (int i = 0; i < strlen(a); i++)
    {
        value = a[i] - 'a';
        if (cnt[value] != 0)
        {
            printf("%c - %d\n", a[i], cnt[value]);
            cnt[value] = 0;
        }
    }
    return 0;
}