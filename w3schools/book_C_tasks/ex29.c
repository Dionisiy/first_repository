#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float i,u,r;

    printf("Введите значение напряжения  ");
    scanf("%f",&u);
     printf("Введите значение сопротивления  ");
    scanf("%f",&r);

    i = u /r ;

    printf("Сила тока равна ""%f"A"\n",i);
}
