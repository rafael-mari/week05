#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void) {
  float a;
  float b;
  float c;
  float sum;
  float d;
  float e;
  float f;

printf("Enter the investment of the first person.\n");
scanf("%f",&a);
printf("Enter the investment of the second person.\n");
scanf("%f",&b);
printf("Enter the investment of the third person\n");
scanf("%f",&c);

sum=a+b+c;
d=a*100/sum;
e=b*100/sum;
f=c*100/sum;

printf("The first person gets a %f",d);
printf(" percent of the earnings, the second gets a %f",e);
printf(" percent and the third person gets a %f",f);
printf(" percent.");

return 0;

}
