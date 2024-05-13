// Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count.Don’t use strlen() function to get the length of the string.After receiving that count in the main function print it.Note : The string will not have any spaces.

#include <stdio.h>
int my_len(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char str[30];
    scanf("%s", str);
    int len = my_len(str);
    printf("%d", len);
    return 0;
}