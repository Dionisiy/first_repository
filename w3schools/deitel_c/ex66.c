#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*бросание 2-х шестигранных игральных костей Игра
   */

int rollDice(void);
int main(int argc, char** argv) {

    int gameStatus,sum,myPoint;
    srand(time(NULL));
    sum =rollDice();

    switch(sum)
    {
        case 7: case11:
            gameStatus = 1;
            break;
        case 2: case 3: case 12:
            gameStatus = 2;
            break;
        default:
            gameStatus = 0;
            myPoint = sum;
            printf("Point is %d \n",myPoint);
            break;
    }
     while(gameStatus == 0)
     {
         sum = rollDice();
         if (sum == myPoint)
             gameStatus = 1;
         else
             if(sum == 7)
                 gameStatus == 2;
     }
    if (gameStatus == 1)
        printf("Player wins");
    else
        printf("Player looses");
    return 0;
}
int rollDice(void){
int die1,die2,workSum;
die1 = 1+(rand() % 6);
die2 = 1+(rand() % 6);
workSum = die1 + die2;
printf("Player rolled %d + %d = %d \n",die1,die2,workSum);
return workSum;
}