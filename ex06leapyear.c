#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
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