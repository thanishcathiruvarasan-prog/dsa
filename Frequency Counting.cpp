#include <stdio.h>
int main() 
{
    char s1[100], s2[100];
    int a[26] = {0}, b[26] = {0};
    int i, cost = 0;
    printf("enter first string: ");
    scanf("%s", s1);
    printf("nter second string: ");
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++) 
	{
        a[s1[i] - 'A']++;
    }

    for (i = 0; s2[i] != '\0'; i++) 
	{
        b[s2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) 
	{
        if (b[i] > a[i]) 
            cost = cost + (b[i] - a[i]);
    
    }
    printf("Minimum cost: %d\n", cost);
}