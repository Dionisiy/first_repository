#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*бросание шестигранной игральной кости 6000 раз*/
main(){
    int i;
    unsigned seed;

    printf("Enter seed");
    scanf("%u",&seed);
    srand(seed);
    for(i=1;i<=10;i++){
    printf("%10i",1+(rand()%6));
    if(i%5 ==0)
    printf("\n");
    }
    return 0;
   }

