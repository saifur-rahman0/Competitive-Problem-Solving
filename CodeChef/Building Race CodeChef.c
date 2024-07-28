#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        float a, b, x, y;
        scanf("%f%f%f%f", &a, &b, &x, &y);
        float r1= a/x;
        float r2= b/y;
        if(r1>r2)
        {
            printf("Chefina\n");
        }
        else if(r1<r2)
        {
            printf("Chef\n");
        }
        else
        {
            printf("Both\n");
        }
    }
}
