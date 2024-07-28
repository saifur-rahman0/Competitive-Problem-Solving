#include<stdio.h>
int main()
{
    //
    int X, Y, CR, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        CR= X-Y;
        printf("%d", CR);
    }
}
