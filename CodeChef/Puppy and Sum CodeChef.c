#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int d,n, sum=0;
        scanf("%d %d", &d, &n);
        for(int i=1; i<=d; i++)
        {
            for(int j=1; j<=n; j++)
            {
                sum= (n * (n + 1)) / 2;
            }
            n = sum;
        }
        printf("%d\n", sum);
    }
}
