#include <stdio.h>
// #include <string.h>
int count_vowel(char s[], int n)
{
    if (s[n] == '\0')
        return 0;
    if (s[n] >= 'A' && s[n] <= 'Z')
    {
        s[n] += 32;
        // printf("%c\n", s[n]);
    }
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
    {
        return 1 + count_vowel(s, n + 1);
    }
    else
    {
        return count_vowel(s, n + 1);
    }
}
int main()
{
    char str[201];
    fgets(str, 201, stdin);
    // int len = strlen(str);
    // printf("%d", len);
    int vowel = count_vowel(str, 0);

    printf("%d\n", vowel);

    return 0;
}