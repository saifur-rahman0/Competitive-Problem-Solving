#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n1, n2, n3, n4, n5, s;
        scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
        s = n1+n2+n3+n4+n5;
        if(s == 0)
            printf("Beginner\n");
        else if(s == 1)
            printf("Junior Developer\n");
        else if(s == 2)
            printf("Middle Developer\n");
        else if(s == 3)
            printf("Senior Developer\n");
        else if(s == 4)
            printf("Hacker\n");
        else
            printf("Jeff Dean\n");
    }
}
