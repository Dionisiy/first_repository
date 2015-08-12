#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main(){
   int i,x;
   for(i=1; i<=20;i++){
   printf("%10i",1+(rand()%6));

        if(i%5==0)
        printf("\n");
   }
    x= rand();
    printf("%i\n",x);
   return 0;
}

