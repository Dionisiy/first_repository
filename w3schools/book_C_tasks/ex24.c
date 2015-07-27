#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float h,r,v;

    printf("Введите радиус окружности цилиндра  ");
    scanf("%f",&r);
     printf("Введите высоту цилиндра  ");
    scanf("%f",&h);

    v=M_PI *r * r * h;

    printf("Объем цилиндра равен ""%f""cm3\n",v);
}
