#include<stdio.h>
#include<stdlib.h>
main()
{
    float x1,x2;
    double y;
     printf("Введите x1");
     scanf("%f",&x1);
     printf("Введите x2");
     scanf("%f",&x2);
     y = (x1 + x2)/2;
    printf("%lf\n",y); // вывод переменной на экран
}