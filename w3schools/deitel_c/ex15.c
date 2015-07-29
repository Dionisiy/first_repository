#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int summ, counter, grade;
  float sred;
  counter = 0;
  summ = 0;

        printf("Введите -1 что бы закончить:\n");
        scanf("%i",&grade);
  while (grade != -1){
            summ = summ + grade;
            counter = counter + 1;
            printf ("Введите -1 что бы закончить: \n");
            scanf ("%i",&grade);

            }
            if(counter != 0 ){

            sred = summ / counter;
            printf("средняя оценка группы: %.2f\n",sred);
            }
            else
            printf ("Вы не ввели ни одной оценки  \n");
            return 0;
}