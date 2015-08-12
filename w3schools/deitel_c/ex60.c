#include<stdio.h>
#include<math.h>

int maximum(int,int,int);

main(){
    int a,b,c;
    printf("enter three integers:  ");
    scanf("%i%i%i",&a,&b,&c);
    printf("Maximum is: %i\n",maximum(a,b,c));
    return 0;
}
int maximum (int x,int y, int z){
    int max = x;
    if (y>max){
    max = y;
    }
    if (z>max){
    max = z;
    }
    return max;
}

