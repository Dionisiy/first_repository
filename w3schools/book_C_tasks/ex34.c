#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{ float om,kilo_om;

    printf("Введите значение в Oм ");
    scanf("%f",&om);
    kilo_om =om /1000.0;


    printf(" %f""Om =""%f"" kOm\n",om,kilo_om);
}
