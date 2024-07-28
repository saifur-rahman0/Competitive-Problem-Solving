#include <stdio.h>
int main()
{
    int arr[5], even, odd, pos, neg;
    even=odd=pos=neg=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
            odd++;
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, pos, neg);
}
