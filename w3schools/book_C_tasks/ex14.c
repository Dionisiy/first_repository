#include<stdio.h>
#include<stdlib.h>
main()
{
    float x,d;
    printf("Введите d");
    scanf("%f",&d);
    x=1;
    x+=d*x;
    printf("%lf\n",x); // вывод переменной на экран
}