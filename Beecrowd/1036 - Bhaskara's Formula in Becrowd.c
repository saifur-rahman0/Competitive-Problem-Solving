#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, in_root, div, rsl1, rsl2;
    scanf("%lf %lf %lf", &a, &b, &c);

    in_root= b*b-4*a*c;
    div= 2*a;
    if(in_root > 0 && div != 0)
    {
        rsl1= ((-b)+ sqrt(in_root))/div;
        rsl2= ((-b)- sqrt(in_root))/div;
        printf("R1 = %.5lf\n", rsl1);
        printf("R2 = %.5lf\n", rsl2);
    }
    else
        printf("Impossivel calcular\n");

}
