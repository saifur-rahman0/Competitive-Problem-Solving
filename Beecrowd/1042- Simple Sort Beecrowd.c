#include <stdio.h>
int main()
{
    int arr[3], i, j, temp, t_arr[3];
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<3; i++)
    {
        t_arr[i]= arr[i];
    }
    for (i = 0; i < 3-1; i++)
    {
        for (j = 0; j < 3-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("%d\n", t_arr[i]);
    }

}
