/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n,i;
  int sum;

  printf("Enter any number above 1 :");
  scanf("%d",&n);

  for (i=1; i<=n; i++) //Execute until condition true
  {
    sum = sum + i; //Calculate sum of input number
  }
  
  printf("Sum of numbers %d :%d",n,sum); // Display sum of n number


  return 0;
}

