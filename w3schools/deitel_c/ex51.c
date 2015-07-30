#include<stdio.h>
main(){

    int x, counter,summ,sredn;
        counter = 0;
        summ = 0;
        printf("Введите число: (9999, что бы выйти)");
        scanf("%i",&x);
            while(x!=9999){
                summ = summ + x;
                counter++;
            printf("Введите число: (9999, что бы выйти)");
            scanf("%i",&x);
        }
            sredn = summ / counter ;
            printf("Среднее значение: %i \n",sredn);
}