#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
	    int N;
	    scanf("%d", &N);
	    printf("%d\n", N*2);
	}
}
/*
    Input Format:
        The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
        The first and only line of each test case contains an integer N, as described in the problem statement.
    Output Format:
        For each test case, output the number of liters of water required by the water cooler to cool for N hours.
    Input:
            2
            1
            2
    Output:
            2
            4
*/
