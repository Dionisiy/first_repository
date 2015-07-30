#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
   float prodaga,zarplata,procent, plata;
    zarplata = 200;
    printf("Введите сумму продаж в долларах()-1 если ввод закончен:  ");
    scanf("%f",&prodaga);
        while(prodaga != -1){
            plata = prodaga /100 *9 + zarplata;
            printf("Зарплата: %f \n",plata);
            printf("Введите сумму продаж в долларах()-1 если ввод закончен): ");
            scanf("%f",&prodaga);
            printf("Зарплата: %f \n",plata);
}

}