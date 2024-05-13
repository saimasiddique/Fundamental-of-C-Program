#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20], str[50], tmp;
    int l1, l2;
    scanf("%s %s", s1, s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    for (int i = 0; i < l1; i++)
    {
        str[i] = s1[i];
    }
    int j = 0;
    for (int i = l1; i < l1 + l2; i++)
    {
        str[i] = s2[j];
        j++;
    }
    str[l1 + l2] = '\0';
    tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;
    printf("%d %d\n%s\n%s %s\n", l1, l2, str, s1, s2);

    return 0;
}