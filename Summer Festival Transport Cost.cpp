#include <stdio.h>
int main() {
    int n, p, q, i, b, s, cost, min = 0;
    int bus = 80, shuttle = 8;
    printf("enter number of people: ");
    scanf("%d", &n);
    printf("enter bus fuel: ");
    scanf("%d", &p);
    printf("enter shuttle fuel: ");
    scanf("%d", &q);
    for (i = 0; i <= (n + bus - 1) / bus; i++) 
	{
        b = i;
        s = n - (b * bus);
        if (s > 0) 
		{
            s = (s + shuttle - 1) / shuttle;
        }
        cost = (b * p + s * q) * 75;

        if (min == 0 || cost < min)
		 {
            min = cost;
        }
    }
    printf("min transport cost: %d\n", min);

    
}