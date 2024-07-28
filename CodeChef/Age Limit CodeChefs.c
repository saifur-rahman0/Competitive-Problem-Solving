#include <stdio.h>

int main(void)
{

	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{

	    int x, y, a;
	    scanf("%d%d%d", &x, &y, &a);
	    if(a >= x && a < y)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}
/*
        The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
        The first and only line of each test case contains two space-separated integers X and Y, as described in the problem statement.

        Example:
                Input:  5
                        21 34 30
                        25 31 31
                        22 29 25
                        20 40 15
                        28 29 28
                Output: YES
                        NO
                        YES
                        NO
                        YES
	*/
