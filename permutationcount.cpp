#include <stdio.h>
#include <string.h>
int main() {
    char s[100][100];
    int n, i, j, l, s1, max = 0;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Enter string: ");
        scanf("%s", s[i]);
        l = strlen(s[i]);
        for (j = 0; s[i][j] != '\0'; j++) {
            if (s[i][j] == 'a' || s[i][j] == 'e' ||
                s[i][j] == 'i' || s[i][j] == 'o' ||
                s[i][j] == 'u' || s[i][j] == 'A' ||
                s[i][j] == 'E' || s[i][j] == 'I' ||
                s[i][j] == 'O' || s[i][j] == 'U') {
                l--;
            }
        }
        s1 = 1;
        if (l > 0) {
            for (j = 1; j <= l; j++) 
                s1 = s1 * j;
            if (s1 > max) 
                max = s1;
        }
    }
    printf(" permutation count: %d", max);
}