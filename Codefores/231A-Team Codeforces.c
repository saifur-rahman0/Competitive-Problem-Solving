#include <stdio.h>

int main()
{
    int t, arr[3], a_count, count=0;
    scanf("%d", &t);
    while(t--)
    {
        a_count=0;
        for(int i=0; i<3; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==1)
                a_count++;
        }
        if(a_count>=2)
            count++;
    }
    printf("%d",count);
}
