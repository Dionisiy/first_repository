#include<stdio.h>
main(){

    float credit, newCredit,dolg,x,y;
    int counter;
        printf("Введите номер счета (-1 чтобы выйти): \n");
        scanf("%i",&counter);
        while(counter != -1){

            printf("Введите размер предельного кредита(2000 или 5000): ");
            scanf("%f",&credit);
            newCredit = credit / 2;
            printf("Ваш предельный кредит уменьшен до: %f\n",newCredit);
            printf("Введите размер задолженности: ");
            scanf("%f",&dolg);
                if(dolg > newCredit){
                y=dolg-newCredit;
                printf("Вы превысили предельный размер кредита на %f,За вами уже выехали \n",y-1);
                }
                else{
                    x = newCredit - dolg;
                printf("Кредитных средств осталось %f \n",x);

                }
                printf("Введите номер счета (-1 чтобы выйти): \n");
                scanf("%i",&counter);
        }



}