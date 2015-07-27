#include<stdio.h>
#include<stdlib.h>
main()
{
    float a,b;
    double s;
    printf("Введите длину и ширину сторон прямоугольника  а и b  ");
    scanf("%f",&a);
    scanf("%f",&b);
    s = a * b;

    printf("Площадь прямоугольника равняется ""%lf\n",s); // вывод переменной на экран
}