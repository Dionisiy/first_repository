#include<stdio.h>
#include<stdlib.h>
main()
{
   float a,h,s;

   printf("Введите длину основания треугольника   ");
   scanf("%f",&a);
   printf("Введите высоту треугольника   ");
   scanf("%f",&h);
   s=0.5*a*h;
    printf("Площадь треугольника равняется  " "%f\n",s); // вывод переменной на экран
}