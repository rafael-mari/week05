/********************************************************
 * Ex06 -- A program used to tell if an entered year is a leap year or not. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: To tell whether a year is a leap year or not using the rules of a leap year. *
 * *
 * Usage: *
 * Run the program, enter the year and the result appears. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h> //
#include <math.h> 
#include <string.h> //
#define MAX 1000

int main(void) {
  int a ;

  printf("Enter a year to know if it is a leap-year\n");
  scanf("%d",&a);
    if (a % 400 == 0){
        printf ("%d",a);
        printf (" is a leap year\n");
    }
    else if (a % 100 == 0){
        printf ("%d",a);
        printf (" is not a leap year\n");
    }
    else if (a % 4 == 0){
      printf ("%d",a);
      printf (" is a leap year\n");
    }
    else{
      printf ("%d",a);
      printf (" is not a leap year\n");
    }
  return 0;

}
