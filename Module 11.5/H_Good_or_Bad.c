#include <stdio.h>
#include <string.h>
int main()
{
    int t, tmp;
    // char s1[] = "101";
    // char s2[] = "010";
    scanf("%d", &t);
    while (t--)
    {
        int cnt = 0;
        char str[100001];
        scanf("%s", str);
        for (int i = 0; i < strlen(str) - 2; i++)
        {
            if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
            {
                cnt++;
                // tmp = i;
                break;
            }
            else if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
            {
                cnt++;
                // tmp = i;
                break;
            }
        }

        if (cnt > 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}