#include<stdio.h>
int main()
{
    int t;
    float a,b,c,sum,avg;
    scanf("%d", &t);
    while(t--){
        scanf("%f %f %f",&a,&b,&c);
        sum=a*2+b*3+c*5;
        printf("%.1f\n",(sum/(2+3+5)));
    }
}
