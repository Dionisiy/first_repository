#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){

    int number,number1,number2;


    printf("Введите переменной:\n");
    scanf("%i",&number);
     printf("Вы ввели %i:\n",number);
     printf("Введите значение 1-й  и 2-й переменной: \n");
     scanf("%i %i",&number1,&number2);
     if(number1 < number2)
     printf("%i меньше %i \n",number1,number2);
     if(number1 >= number2)
      printf("%i больше или равно%i \n",number1,number2);


    }