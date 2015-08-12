#include<stdio.h>
main(){

    int number;
    int counter =5;
       printf("Введите число от 1 до 30:\n");
       scanf("%i",&number);
        while(counter != 0){

           while (number!=0){
            printf("*");
            number--;
           }

            printf("\n");
             printf("Введите число от 1 до 30:\n");
          scanf("%i",&number);
           --counter;

        }



}