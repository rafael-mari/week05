/********************************************************
 * Ex01 -- A program used to calculate and display the area and volume of a cylinder when the user provides de measure of the radius and the height. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: To calculate the area and volume of a cylinder. *
 * *
 * Usage: *
 * Run the program, enter the measures required and the area and volume appear. *
 ********************************************************/

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
