#include <stdio.h>
char *char_element3(char *str, char c)
{
    char *pc;
    while (*str != '\0')
    {
        if (*str == c)
        {
            pc = str;
        }
        str++;
    }
    return pc;
}
int main(void)
{
    char *string;
    char *ans;
    char c;
    string = "ABCdefeg";
    c = 'e';
    ans = char_element3(string, c);
    printf("%p", ans);
    return 0;
}