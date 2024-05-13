#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    int i, j, len, flag = 0;
    scanf("%s", str);
    len = strlen(str);
    i = 0, j = len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
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