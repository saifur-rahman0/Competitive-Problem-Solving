#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,k;
        scanf("%d%d,", &n,&k);
        if(n%k == 0)
        {
            printf("%d\n", n/k);
        }
        else
            printf("-1\n");
    }
}
