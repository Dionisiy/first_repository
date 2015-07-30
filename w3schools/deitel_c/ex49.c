#include<stdio.h>
main(){

    int i,j,x,y;

    printf("Введите числа");
    scanf("%i  %i",&x,&y);
        for(i=1;i<=y;j++){
        for(j=1;j<=x;j++)
            printf("@");

            printf("\n");
        }
        return 0;
    }