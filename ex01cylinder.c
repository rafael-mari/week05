#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 
#define pi 3.14159265359

int main(void){
  float r;
  float h;
  float a;
  float v;

printf("Enter the radius of the cylinder\n");
scanf("%f",&r);

printf("Enter the height of the cylinder\n");
scanf("%f",&h);

a=2*pi*r*(h+r);
printf("The area of the cylinder is %f",a);
printf(" square units.\n");

v=pi*r*r*h;
printf("The volume of the cylinder is %f",v);
printf(" cubic units.\n");

return 0;

}
