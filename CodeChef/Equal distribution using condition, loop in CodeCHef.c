#include <stdio.h>

int main(void)
{
	int t, x, y;
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d %d", &x, &y);
        if((x+y) % 2 == 0)
        {
            printf("YES\n");
        }
        else if((x+y) % 2 != 0)
        {
            printf("NO\n");
        }
    }
	return 0;
}

