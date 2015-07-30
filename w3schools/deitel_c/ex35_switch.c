#include<stdio.h>
main(){

    int x;

     for(x=0;x<=100;x++){
        switch(x%2 ==0){
            case 0:
            printf("нечет %i \n",x);
            case 1:
            printf("чет %i \n",x);
        }
     }

    }