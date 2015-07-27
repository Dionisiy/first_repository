#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float i,u,r;

    printf("Введите значение силы тока  ");
    scanf("%f",&i);
     printf("Введите значение сопротивления  ");
    scanf("%f",&r);

    u =  r/i ;

    printf("Напряжеие равно ""%f""V \n",u);
}
