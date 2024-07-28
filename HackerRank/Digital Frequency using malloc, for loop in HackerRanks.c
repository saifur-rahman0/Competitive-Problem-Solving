#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *str, ch;
    str=(char*)malloc(1024*sizeof(char));
    int n, count=0;
    scanf("%s", str);
    n= strlen(str);
    ch='0';
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[j] == ch)
            {
                count++;
            }
        }
        printf("%d ", count);
        count=0;
        ch++;
    }

    return 0;
}
