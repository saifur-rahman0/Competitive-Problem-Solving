#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5][5], i, j, fi, fj, count= 0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1)
            {
                fi=i+1;
                fj=j+1;
            }
        }
    }
    if(fi>3)
        count= fi-3;
    else if(fi<3)
        count= 3-fi;
    if(fj>3)
        count= count+(fj-3);
    else if(fj<3)
        count=count+(3-fj);
    printf("%d", count);
}
