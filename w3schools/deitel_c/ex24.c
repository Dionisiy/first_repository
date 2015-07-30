#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){

    int sum = 0 ,number;
    for(number=2;number<=100;number+=2)
        sum+= number;
        printf("Sum is %i \n",sum);
    return 0;
}