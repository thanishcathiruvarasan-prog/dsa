#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, j, pos;
    printf("enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        pos = i + 1;
        for(j = 0; j < i; j++)
        {
            if(s[i] == s[j])
            {
                pos = j + 1;
                break;
            }
        }
        if(i > 0)
            printf("-");
        for(j = 0; j < pos; j++)
            printf("%c", s[i]);
    
    }
}
