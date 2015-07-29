#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){
  int a,b,c;
  int x,y,z;
  printf(" Введите a \n");
  scanf("%i",&a);
  printf(" Введите b \n");
  scanf("%i",&b);
    printf(" Введите c \n");
  scanf("%i",&c);


 x = a + b + c;
 y = (a + b + c) / 3;
 z = a * b * c;
    if (a > b && a > c)
    printf("Наибольшее число a = %i\n",a);
        else
         if (b > c)
        printf("Наибольшее число b = %i\n",b);
            else

            printf("Наибольшее число c = %i\n",c);

    }