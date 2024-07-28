#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N, X;
        scanf("%d %d", &N, &X);
        if((N/2) < X)
        {
            printf("%d\n", N-X);
        }
        else
            printf("%d\n", X);
    }
}
/*

*/
