#include<stdio.h>
main(){

    int x;
     for (x=1;x<=20; x++){

     if(x==5){
        break; /*прерывает цикл только если х==5*/
     }
        printf("%i \n",x);

     }
     printf("\n выход из цикла когда х== %i\n",x);
     return 0;


    }