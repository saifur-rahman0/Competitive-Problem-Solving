#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char *number[]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(1<=n && n<=9)
    {
        printf("%s", number[n-1]);
    }
    else
    {
        printf("Greater than 9");
    }
}
