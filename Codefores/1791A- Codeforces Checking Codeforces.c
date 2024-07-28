#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char str[15]= "codeforces", chrt;
    while(t--)
    {
        scanf(" %c", &chrt);
        if(strchr(str, chrt) != NULL)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
