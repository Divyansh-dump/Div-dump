#include <stdio.h>
#include <string.h>
#define MAX_LEN 500

char caps(char s[], int index)
{
    char ch = s[index];
    if(ch == '\0')
        return '!';

    if((int)(ch) >= 65 && (int)(ch)<=90)
        return ch;
    else
        caps(s, index+1);
}

void main()
{

    char str[MAX_LEN];


    printf("Sentence: ");
    gets(str);


    char cap = caps(str, 0);

    if (cap=='!')
        printf("No capital letter found");
    else
        printf("%c was the first capital letter encountered", cap);
}
