#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float cels,far;

    printf("Введите радиус градус по Фаренгейту  ");
    scanf("%f",&far);

    cels= 0.555 * (far - 32);

    printf("Это ""%f""град. по Цельсию\n",cels);
}
