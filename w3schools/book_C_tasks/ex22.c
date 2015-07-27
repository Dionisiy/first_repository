#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float s,b,a,c,v;

    printf("Введите размер ребра a   ");
    scanf("%f",&a);
    printf("Введите размер ребра b  ");
    scanf("%f",&b);
    printf("Введите размер ребра c  ");
    scanf("%f",&c);
    s= 2*((a*b) + (b*c) + (a*c));
    v= a * b * c;


    printf("Площадь параллелепипеда равна ""%f" "cm2\n",s); // вывод переменной на экран
    printf("Объем  параллелепипеда равен ""%f""cm3\n",v);
}
