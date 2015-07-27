#include<stdio.h>
#include<stdlib.h>
main()
{
       float CenaTetr;
       int KolTetr;
       float CenaObl;
       int KolObl;
       double summa;
         printf("Введите цену тертадей"); // вывод переменной на экран
           scanf("%f",&CenaTetr);
           printf("Введите количество тертадей");
           scanf("%i",&KolTetr);
           printf("Введите цену обложек"); // вывод переменной на экран
           scanf("%f",&CenaObl);
           printf("Обложек Вам понадобится столько же сколько и тетрадей. ");
           KolObl = KolTetr;
           summa = (CenaTetr * KolTetr)+(CenaObl * KolObl );

    printf("За обложки и тетради Вы заплатите %lf\n",summa); // вывод переменной на экран
}