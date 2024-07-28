#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if(x<7)
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
    A person is said to be sleep deprived if he slept strictly less than 7 hours in a day.
    Explanation:
            Test Case 1: Since 4<7, Chef is sleep deprived.
            Test Case 2: Since 7≥7, Chef is not sleep deprived.
            Test Case 3: Since 10≥7, Chef is not sleep deprived.
    Input:
            3
            4
            7
            10
    Output:
            YES
            NO
            NO
*/
