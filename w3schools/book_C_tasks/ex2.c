#include <stdio.h>
#include <stdlib.h>

int main()
{

  double kg,funt;
  printf("Please enter a value funts ");
  scanf("%lf",&funt); /*scans in a funt*/

  kg= funt * 0.454;
  printf("in %lf funts  is %lf kiglogramms\n",funt,kg);



}