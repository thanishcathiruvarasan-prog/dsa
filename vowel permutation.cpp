#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    int i, l, s1 = 1;
    printf("Enter a string: ");
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; s[i] != '\0'; i++) 
	{
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U') 
            l--;   
    }
    if (l == 0) 
        printf("Permutation count: 0\n");
     
	else
	 {
        for (i = l; i >= 1; i--) 
            s1 = s1 * i;
        printf("Permutation count: %d", s1);
    }
}