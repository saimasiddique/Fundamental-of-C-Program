#include <stdio.h>
#include <string.h>
int main()
{
    char str[100002];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("%s\n", str);
    return 0;
}