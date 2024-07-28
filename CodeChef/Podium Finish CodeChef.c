#include <stdio.h>
int main()
{
    int i=0, A, B, r, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &A, &B);
        r=A+B;
        printf("%d\n", r);
    }
}
