#include<stdio.h>
#include<stdlib.h>
main()
{

    int srok;
    int stavka;
    double dohod,summa;
    printf("enter summa");
    scanf("%lf",&summa);
    printf("enter srok");
    scanf("%i",&srok);
    printf("enter stavka");
    scanf("%i",&stavka);
    dohod = summa * srok * stavka;
    printf("%lf\n",dohod); // вывод переменной на экран
}