#include<stdio.h>
#include<math.h>
main(){

    int side1,side2,x;
    double gipo,y;
    printf("Введите размер 1-го катета: \n");
    scanf("%i",&side1);
    printf("Введите размер 2-го катета:\n");
    scanf("%i",&side2);
        x =side1*side1 + side2*side2;
        printf("%i\n",x);
        y=sqrt(x);
        printf("%lf",y);
     //gipo =sqrt(x);
    //printf("1-й катет: %i\n 2-й катет: %i \n  гипотенуза: %lf\n",side1,side2,gipo);



}