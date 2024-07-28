#include <stdio.h>
#include<math.h>
int main()
{
    int  r1, t;
    float result, n, x;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%f %f", &n, &x);
        result = ((n*x)/4);
        r1=ceil(result);
        printf("%d\n", r1);
    }
}
