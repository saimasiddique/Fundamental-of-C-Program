#include <stdio.h>
int main()
{
    char ch[23];
    // gets(ch);
    fgets(ch, 23, stdin);
    printf("%s", ch);
    return 0;
}