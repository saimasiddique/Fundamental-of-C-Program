#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char str[1002];
    scanf("%s", str);
    int ans = is_palindrome(str);

    if (ans == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}