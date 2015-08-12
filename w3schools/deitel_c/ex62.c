#include<stdio.h>
#include<math.h>
/*бросание шестигранной игральной кости 6000 раз*/
main(){

    int face,roll,frequency1=0,frequency2 =0,frequency3 =0,frequency4 =0,
    frequency5 =0,frequency6 =0;
        for (roll=1;roll<=6000; roll++){
           face= 1+rand() %6;
           switch(face){
           case 1:
               ++frequency1;
                break;
           case 2:
               ++frequency2;
                 break;
           case 3:
              ++frequency3;
                break;
           case 4:
              ++frequency4;
                break;
            case 5:
              ++frequency5;
                break;
            case 6:
              ++frequency6;
                break;

           }
        }
       printf("1%13i\n",frequency1);
       printf("2%13i\n",frequency2);
       printf("3%13i\n",frequency3);
       printf("4%13i\n",frequency4);
       printf("5%13i\n",frequency5);
       printf("6%13i\n",frequency6);
   }

