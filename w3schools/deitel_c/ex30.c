#include<stdio.h>
main(){

    int x;
     for (x=1;x<=20; x++){

     if(x==5){
        printf(" мы пропустили только %i\n",x);
        continue; /*прерывает цикл только если х==5*/
     }
        printf("%i \n",x);

     }
     //printf("\n пропускает только 5 х== %i\n",x);
     return 0;


    }