#include <stdio.h>

int main(void)
{
	/*
        In a contest where N new users visited the contest
        There were 1010 new users. Among those 1010, 33 didn't make any submissions. This means that the other 10 - 3 = 7 users made submissions and will get a rating.
        This is the first integer of the output.

        Now, among these 7 users, 2 couldn't solve any problem even though they submitted and tried.
        So, they will get a rating less than equal to 1000. The other 7 - 2 = 5 users were able to solve at least 1 problem

        example:
                Input: 10 3 2
                Output: 7 5
	*/
	int N;
	scanf("%d", &N);
	int a;
	scanf("%d", &a);
	int c;
	c= N-a;
	int b;
	scanf("%d", &b);
	printf("%d %d", c, c-b);
	return 0;
}

