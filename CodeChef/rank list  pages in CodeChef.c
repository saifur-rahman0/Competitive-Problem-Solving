#include <stdio.h>
#include <math.h>
int main()
{
    int c, t;
    double in, x;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%lf", &x);   //input page number
        in=x/25;            //calculate page number.    per page have 25 items.
        c= ceil(in);        //get ceiling number
        printf("%d\n", c);  //show page number
    }
}
