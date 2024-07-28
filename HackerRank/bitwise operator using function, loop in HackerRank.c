#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int and, or, xor;
    and=or=xor=0;
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
           if(((i&j) < k) && ((i&j) > and))
            and= i&j;
           if(((i|j) < k) && ((i|j) > or))
            or= i|j;
           if(((i^j) < k) && ((i^j) > xor))
            xor= i^j;
        }
    }
    printf("%d\n%d\n%d", and, or, xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
