#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int grade;
  printf(" Ввдеите оценку студента (от 1 до 100) \n");
  scanf("%i",&grade);
  if(grade >= 90)

     printf(" Оценка A \n ");

  else
    if(grade >= 80)
      printf(" Оценка B \n ");

    else
       if(grade >= 70)
        printf(" Оценка C \n ");
       else
          if(grade >= 60)
        printf(" Оценка D \n ");
          else
          printf("Оценка F \n");


    }