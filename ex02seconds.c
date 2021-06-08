/********************************************************
 * Ex02 -- A program used to convert the entered seconds into the hours:minutes:seconds format. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: To convert the seconds into hous, minutes and seconds. *
 * *
 * Usage: *
 * Run the program, enter the number of seconds and the new format appears. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void) {
  int s;
  int m;
  int h;
  int sec;

  printf("Enter the amount of seconds to convert.\n");
  scanf("%d",&sec);

  h=trunc(sec/3600);
  m=trunc((sec-h*3600)/60);
  s=sec-(h*3600+m*60);

  printf("The entered number of seconds is equal to %d",h);
  printf("h:");
  printf("%d",m);
  printf("m:");
  printf("%d",s);
  printf("s.");

  return 0;

}
