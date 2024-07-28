#include <stdio.h>

int main(void)
{
	int t, x, y;
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d %d", &x, &y);
        if(x*2 > y*5)
        {
            printf("Chocolate\n");
        }
        else if(x*2 < y*5)
        {
            printf("Candy\n");
        }
        else if(x*2 == y*5)
        {
            printf("Either\n");
        }
    }
	return 0;
}

