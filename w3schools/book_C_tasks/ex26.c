#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float h,r,v;

    printf("Введите радиус окружности основания конуса  ");
    scanf("%f",&r);
     printf("Введите высоту конуса  ");
    scanf("%f",&h);

    v= 0.33 * M_PI * r * r * h;

    printf("Объем цилиндра равен ""%f""cm3\n",v);
}
