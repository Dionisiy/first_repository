#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float s,h,r,v;

    printf("Введите радиус окружности цилиндра  ");
    scanf("%f",&r);
     printf("Введите высоту цилиндра  ");
    scanf("%f",&h);
    s= 2*M_PI * r *(h+ r);
    v=M_PI *r * r * h;


    printf("Площадь цилиндра равна ""%f" "cm2\n",s); // вывод переменной на экран
    printf("Объем цилиндра равен ""%f""cm3\n",v);
}
