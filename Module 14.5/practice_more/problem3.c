// Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.
#include <stdio.h>
int char_to_ascii(char ch)
{
    return ch;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    int ans = char_to_ascii(ch);
    printf("%d", ans);
    return 0;
}