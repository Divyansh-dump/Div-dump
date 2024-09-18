#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 500

bool isPalRec(char str[], int s, int e)
{
    if (s == e)
        return true;
    if (str[s] != str[e])
        return false;
    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);
    return true;
}
int main()
{
    char str[MAX_LEN];
    printf("Enter word: ");
    gets(str);
    int length = 0;
    char ch = str[length];
    while(ch != '\0')
    {
        length++;
        ch = str[length];
    }
    if (isPalRec(str, 0, length-1))
        printf("Yes");
    else
        printf("No");
    return 0;
}
