#include<stdio.h>
#include <stdlib.h>
#include <math.h>



   main(){

    int year;
    double rezult, vklad=1000,rate =0.5;
        for(year=1;year<=10;year++){
        rezult = vklad*pow((1+rate),year);
        printf("%lf\n",rezult);
        }
}// НЕ получилось посчитать сложный процент