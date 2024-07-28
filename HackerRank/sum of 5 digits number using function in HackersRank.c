#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num, sum_digits;
    scanf("%d", &num);
    sum_digits= sum_digits_f(num);
    printf("%d", sum_digits);
}
int sum=0, rem;
int sum_digits_f(int num)
{
    if(num>0)
    {
        rem = num%10;
        sum = sum+ rem;
        sum_digits_f(num/10);
    }
    return sum;
}
