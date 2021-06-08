/********************************************************
 * Ex03 -- A program used calculate a sum of the first ten digits of a series. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: To sum the first 10 digits of a series provided *
 * *
 * Usage: *
 * Run the program and the result appears. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 
#include <string.h> 

int main(void) {
  int f=4;
  float sum;

  sum= (((float)f/1)-((float)f/3)+((float)f/5)-((float)f/7)+((float)f/9)-((float)f/11)+(float)f/13)-((float)f/15)+((float)f/17)-((float)f/19);
  printf("The result of this sum is %f\n",sum);

  return 0;

}
