#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){

    int x1,x2;

    printf("Введите x1 и  x2:\n");
    scanf("%i %i",&x1,&x2);

       if(x1 == x2)
           printf("%i равно %i \n",x1,x2);
       if(x1 != x2)
           printf("%i не равно %i\n",x1,x2);
       if(x1 < x2)
           printf("%i меньше чем %i\n",x1,x2);
       if(x1 > x2)
           printf("%i больше чем %i\n",x1,x2);
       if(x1 <= x2)
           printf("%i меньше или равно %i\n",x1,x2);
       if(x1 >= x2)
           printf("%i больше или равно %i\n",x1,x2);



    }