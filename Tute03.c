/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  float n,sum = 0;
  int i;

  printf("Enter the number: ");
  scanf("%f",&n);

  for( i = 1; i <= n; i++)
  {
    sum = sum + i; 

  }
  
  printf(" sum of the numbers from 1 to %.3f : %.2f",n,sum);
   
  return 0;
}

