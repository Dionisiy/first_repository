#include<stdio.h>
#include<stdlib.h>
main()
{
    double km,versta;
    printf("Введите расстояние в километрах");
    scanf("%lf",&km);
    versta =km * 0.93738283;
    printf("Расстояние в верстах ""%lf\n",versta); // вывод переменной на экран
}