#include<stdio.h>
int main()
{
    int arr[100], pos=0, high=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<100; i++)
    {
        if(arr[i]>high)
        {
            high= arr[i];
            pos= i+1;
        }
    }
    printf("%d\n%d\n", high, pos);
}
