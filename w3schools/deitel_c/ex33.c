#include<stdio.h>
main(){

    int x;
    x=1;
    while(x<=300000000){
        if(x % 1000000 ==0){
        printf("%i \n",x);
        }
        x++;
    }

    }