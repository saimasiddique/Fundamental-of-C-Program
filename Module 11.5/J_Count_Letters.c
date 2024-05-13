#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    int cnt[26] = {0};
    while (scanf("%c", &ch) != EOF)
    {
        // scanf("%s", str);

        // for (int i = 0; i < strlen(str); i++)
        // {
        int val = ch - 'a';
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {

        if (cnt[i] != 0)
        {
            printf("%c : %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}