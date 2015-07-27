#include<stdio.h>
#include<stdlib.h>
main()
{
    float s;
    float r1, r2;
    float p = 3.14;
    printf("enter r1");
    scanf("%f,",&r1);
    printf("enter r2");
    scanf("%f ",&r2);
    s = (r1*p)-(r2*p);
    printf("%lf\n",s); // вывод переменной на экран
}