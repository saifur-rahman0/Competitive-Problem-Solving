#include <stdio.h>
int main()
{
    float arr[6];
    int count=0;
    for(int i=0; i<6; i++)
    {
        scanf("%f", &arr[i]);
        if(arr[i] > 0)
            count++;
    }
    printf("%d valores positivos\n", count);
}
