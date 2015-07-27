#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{ float cena_tetr,cena_obl,cena_kar;
   int ntetr, nkar;
   float summ;

    printf("Введите цену одной тетради ");
    scanf("%f",&cena_tetr);
    printf("Введите цену одной обложки ");
    scanf("%f",&cena_obl);
    printf("Введите количество тетрадей ");
    scanf("%i",&ntetr);
    printf("Введите цену одного карандаша ");
    scanf("%f",&cena_kar);
    printf("Введите количество какрандашей ");
    scanf("%i",&nkar);

    summ = ntetr * (cena_tetr + cena_obl) + nkar * cena_kar;
    printf(" %f\n",summ);
}
