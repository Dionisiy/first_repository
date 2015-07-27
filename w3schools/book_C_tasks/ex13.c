#include<stdio.h>
#include<stdlib.h>
main()
{
    float x;
   double y;
    printf(" Введите х для вычисления значения функции у = –2,7x3 + 0,23x2 – 1,4");
    scanf("%f",&x);
    y =-2.7*x*x*x + 0.23*x*x - 1.4;


    printf("%lf\n",y); // вывод переменной на экран
}