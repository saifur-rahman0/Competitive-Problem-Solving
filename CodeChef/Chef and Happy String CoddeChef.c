#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char strng[1000];
        int point=0;
        scanf("%s", &strng);
        for(int i=1; i<=strlen(strng); i++)
        {
            if(strng[i]== 'a' || strng[i]== 'e' || strng[i]== 'i' || strng[i]== 'o' || strng[i]== 'u')
            {
                point++;
            }
            else if(point > 2)
            {
                break;
            }
            else
            {
                point= 0;
            }
        }
        if(point>2)
        {
            printf("Happy\n");
        }
        else
        {
            printf("Sad\n");
        }
    }
}
