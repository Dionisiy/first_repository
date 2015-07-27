#include<stdio.h>
#include<stdlib.h>
main()
{
    float CenaTetr;
    int KolTetr;
    float CenaKar;
    int KolKar;
    float CenaLin;
    int KolLin;
    float Summa;

    printf("Введите цену тертадей"); // вывод переменной на экран
    scanf("%f",&CenaTetr);
    printf("Введите количество тертадей");
    scanf("%i",&KolTetr);
     printf("Введите цену карандашей"); // вывод переменной на экран
    scanf("%f",&CenaKar);
    printf("Введите количество карандашей");
    scanf("%i",&KolKar);
    printf("Введите цену линеек");
     scanf("%f",&CenaLin);
    printf("Введите количество линеек");
    scanf("%i",&KolLin);
    Summa =  (CenaTetr*KolTetr)+(CenaKar*KolKar)+(CenaLin*KolLin);
    printf("За все это вы заплатите %f\n",Summa);
}

