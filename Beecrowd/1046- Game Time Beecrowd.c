#include <stdio.h>
#include <math.h>
int main()
{
    int st, lt, rsl, trsl;
    scanf("%d %d", &st, &lt);
    if(st >= lt)
        rsl= 24- abs(st -lt);
    else
    {
        trsl= 24- abs(st-lt);
        rsl= 24- trsl;
    }
    printf("O JOGO DUROU %d HORA(S)\n", rsl);

}
