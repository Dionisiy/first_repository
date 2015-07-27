#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float s,r,v;

    printf("Введите радиус окружности шара  ");
    scanf("%f",&r);

    v = 0.75 * M_PI * r * r * r;
    s = 4 * M_PI * r * r;

    printf("Площадь поверхности шара равна ""%f" "cm2\n",s); // вывод переменной на экран
    printf("Объем шара равен ""%f""cm3\n",v);
}
