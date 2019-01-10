#include <stdio.h>
int cntalpha(char *str, char c)
{
    int cnt = 0;
    while (*str != '\0')
    {
        if (*str == c)
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}
int main(void)
{
    int ans;
    char *string = "Hello world";
    char charctor = 'l';
    printf("%d", cntalpha(string, charctor));
    return 0;
}