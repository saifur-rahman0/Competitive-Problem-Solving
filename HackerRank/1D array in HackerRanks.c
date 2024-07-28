#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, n, *ptr, sum=0;
    scanf("%d", &n);
    ptr= (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
        sum+=*(ptr+i);
    }
    printf("%d", sum);
}
