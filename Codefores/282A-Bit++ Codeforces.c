#include <stdio.h>

int main()
{
    int t, x=0;
    char op[4];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", &op);
        if('X' == op[0] && '+' == op[2])
            x++;
        else if('X' == op[0] && '-' == op[2])
            x--;
        else if('+' == op[0] && 'X' == op[2])
            ++x;
        else if('-' == op[0] && 'X' == op[2])
            --x;
    }
    printf("%d", x);
}
