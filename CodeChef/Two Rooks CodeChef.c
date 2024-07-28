#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int r1, c1, r2, c2;
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
        if (r1 == r2 || c1 == c2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
