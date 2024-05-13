#include <stdio.h>
#include <string.h>

int palindrome_string(char s[], int x, int y)
{
    // printf("%c %c %d\n", s[x], s[y - 1], y);
    if (x >= y)
    {
        return 0;
    }
    else if (s[x] != s[y])
    {
        // printf("%c %c %d\n", s[x], s[y], y);
        return 1;
    }
    // printf("%c %c %d\n", s[x], s[y], y);
    return palindrome_string(s, x + 1, y - 1);
}
int main()
{
    char str[1001];
    fgets(str, 1001, stdin);

    int len = strlen(str);
    // printf("%d\n", len);
    int i = 0, j = len - 2;
    // int flag = 0;
    int flag = palindrome_string(str, i, j);
    // printf("%d\n", flag);
    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}