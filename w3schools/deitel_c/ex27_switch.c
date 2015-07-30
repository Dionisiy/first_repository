#include<stdio.h>





   main(){


  int i=2;

      switch (i)

        {

         case 1: i += 2;

         case 2: i *= 3;

         case 0: i /= 2;

         case 4: i -= 5;

         default:      ;

     }

    printf("%i \n",i);


}