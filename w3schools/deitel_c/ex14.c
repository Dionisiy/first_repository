#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int summ, counter, sred, grade;
  counter = 1;
  summ = 0;


  while (counter <= 10){

            printf ("Введите оценку %i : \n",counter);
            scanf ("%i",&grade);
            summ = summ + grade;
            counter = counter + 1;
            }
            sred = summ / 10;
            printf("средняя оценка группы: %i\n",sred);

}