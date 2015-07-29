#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int exam, counter_stud, counter_pass, counter_fail;
  counter_stud = 0;
  counter_pass = 0;
  counter_fail = 0;

  while (counter_stud<= 10){

            printf ("Введите оценку 1 или 2 : \n");
            scanf ("%i",&exam);

            if (exam ==1){
            counter_pass = counter_pass + 1;
            printf("Студент сдал \n");
            }
            else {
            counter_fail = counter_fail + 1;
             printf("Студент  не сдал \n");
            }
            counter_stud = counter_stud + 1;
            }
            printf("Сдали: %i \n",counter_pass);
            printf("НЕ сдали: %i\n",counter_fail);
            if (counter_pass >8){
               printf("Плата за курс должна быть повышена \n ");
            }
            else{
                printf("Плату повышать не надо \n");
            }
}