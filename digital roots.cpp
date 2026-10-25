
#include <stdio.h>
int main() 
{
    int n, sum;
	printf("enter the number:");
    scanf("%d", &n);
    while (n >= 10) {
        sum = 0;
        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    printf("%d", n);
}
