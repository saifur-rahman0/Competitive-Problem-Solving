#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float x1,x2,x3, y1,y2,y3,L,d;
    printf("\n-----Fiber length(l)------");
    printf("\nx1=");
    scanf("%f",&x1);
    printf("\ny1=");
    scanf("%f",&y1);
    printf("\nx2=");
    scanf("%f",&x2);
    printf("\ny2=");
    scanf("%f",&y2);
    L= sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    printf("\n\nL in mm=%f",L);
    getch();

     printf("\n-----Fiber dia(l)------");
    printf("\nx2=");
    scanf("%f",&x2);
    printf("\ny2=");
    scanf("%f",&y2);
    printf("\nx3=");
    scanf("%f",&x3);
    printf("\ny3=");
    scanf("%f",&y3);
    d= sqrt(pow((x3-x2),2)+ pow((y3-y2),2));
    printf("\n\nd in mm=%f",d);
    getch();




}
