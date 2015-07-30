#include<stdio.h>





   main(){

    int grade;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0,fCount = 0;
    printf("Введите букву оценки. \n");
    printf("Enter the EOF character to end input. \n");

    while((grade = scanf(%c,%c) ) != EOF){// не отвечает getchar!!!

        swicth(grade) {

            case 'A':case 'a':
                ++aCount;
                break;
            case 'B': case 'b':
                ++bCount;
                break;
            case 'C': case 'c':
                ++cCount;
                break;
            case 'D': case 'd':
                ++dCount;
                break;
            case 'F': case 'f':
                ++fCount;
                break;
            case '\n': case' ':
            break;

            default:
                printf("Incorrect letter grade entered");
                printf("Enter a new letter");
                break;


        }
    }
        printf("\n Totals for each letter grade are:\n");
        printf("A: %i\n", aCount);
        printf("B: %i\n", bCount);
        printf("c: %i\n", cCount);
        printf("D: %i\n", dCount);
        printf("F: %i\n", fCount);
            return 0;


}