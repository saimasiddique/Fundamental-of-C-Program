#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];
    int l1, l2;

    gets(s);
    gets(t);
    l1 = strlen(s);
    l2 = strlen(t);
    printf("%d %d\n", l1, l2);
    printf("%s %s\n", s, t);

    return 0;
}