#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float s,r;

    printf("Введите радиус круга  ");
    scanf("%f",&r);
    s= M_PI * r * r;


    printf("Площадь круга равна ""%f\n",s); // вывод переменной на экран
}