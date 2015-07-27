#include<stdio.h>
#include<stdlib.h>
main()
{

    double funt,kg;
    printf("Введите количество фунтов");
    scanf("%lf",&funt);
    kg = funt * 0.459;
    printf("%lf\n",kg); // вывод переменной на экран
}