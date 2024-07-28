#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
	    int x, y, z;
	    scanf("%d%d%d", &x, &y, &z);
	    printf("%d\n", x*y*z);
	}
}
/*
    Input Format:
        The first line will contain TT, the number of test cases. Then the test cases follow.
        Each test case consists of a single line of input, containing three space-separated integers X, Y and Z.
    Output Format:
        For each test case, output in a single line the total number of chapters Chef has to study this semester.
    Input:
            3
            1 1 1
            2 1 2
            1 2 3
    Output:
            1
            4
            6
*/
