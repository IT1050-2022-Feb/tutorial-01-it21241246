/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{ 
  float n1,n2,avg;
  printf("Enter the marks of two subjects\n");
  scanf("%f %f",&n1,&n2);

  avg = (n1+n2)/2;

  printf("Average of the marks : %.2f", avg);
  return 0;
}

