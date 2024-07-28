#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
	    int x, y;
	    scanf("%d%d", &x, &y);
	    if(x>y)
            printf("0\n");
        else
            printf("%d\n", y-x);
	}
	return 0;
}
/*
    Input Format:
        The first line of input will contain a single integer TT, denoting the number of test cases.
        Each test case consists of two-space separated integers on a single line, X and Y —
            the current number of seats up for enrolment and the number of students interested in taking up the course in the upcoming semester, respectively.
    Output Format:
        For each test case, output on a new line the minimum number of seats required to be added.
    Input:
            4
            1 1
            12 34
            50 49
            49 50
    Output:
            0
            22
            0
            1
*/
