#include<stdio.h>
#include<stdlib.h>
main()
{
    float a,b,h,s;

     printf("Введите длину основания трапеции  ");
   scanf("%f",&a);
     printf("Введите длину основания трапеции  ");
   scanf("%f",&b);
         printf("Введите высоту трапеции  ");
   scanf("%f",&h);
        s= ((a+b)/2)*h;
    printf("Площадь трапеции равна  ""%f\n",s); // вывод переменной на экран
}