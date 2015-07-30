#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
   float summa,days, rate, rezult,period;

    printf("Введите сумму (-1 если ввод закончен):  ");
    scanf("%f",&summa);
        while(summa != -1){
        printf("Введите  процент:  ");
        scanf("%f",&rate);
        printf("Введите  количество дней: ");
        scanf("%f",&days);
        period = days /365;
        rezult = summa * rate * period;
        printf("Выплата по простому проценту составляет %f \n",rezult);
        printf("Введите сумму (-1 если ввод закончен):  ");
    scanf("%f",&summa);

}

}