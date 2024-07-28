#include <stdio.h>
#include <string.h>

int main()
{
    char pos[100];
    int cnt=1, i=0;
    scanf("%s", &pos);
    while(pos[i] != '\0')
    {
        if(pos[i] == pos[i-1])
        {
            cnt++;
            if(cnt == 7)
            {
                printf("YES\n");
                exit(0);
            }
        }
        else
            cnt=1;
        i++;
    }
    printf("NO\n");
}
