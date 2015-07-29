#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int grade;
  printf(" Ввдеите оценку студента (от 1 до 100) \n");
  scanf("%i",&grade);
  if(grade >= 60){

     printf(" Зачет \n ");
     printf("Вы  сдали\n");
     }
  else{
     printf("Вы не сдали\n");
     printf("Вам необходимо прийти на пересдачу\n");
      }
}