#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int x,y,a,b,c,d,e;
  printf(" Введите x \n");
  scanf("%i",&x);
  printf(" Введите y \n");
  scanf("%i",&y);
  a = x+y;
  b= x-y;
  c= x*y;
  d = x/y;
  e = x%y;
  printf("x + y = %i\n  \n",a);
  printf("x-y = %i\n",b);
  printf("x*y = %i\n",c);
   printf("x/y = %i\n",d);
   printf("x mod y = %i\n",e);
    /*int number,number1,number2;


    printf("Введите переменной:\n");
    scanf("%i",&number);
     printf("Вы ввели %i:\n",number);
     printf("Введите значение 1-й  и 2-й переменной: \n");
     scanf("%i %i",&number1,&number2);
     if(number1 < number2)
     printf("%i меньше %i \n",number1,number2);
     if(number1 >= number2)
      printf("%i больше или равно%i \n",number1,number2);
*/


    }