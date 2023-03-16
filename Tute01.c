/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int subject_1;
  int subject_2;
  float avg=0;

  printf("Enter Marks of Subject-01 :");
  scanf("%d",&subject_1);

  printf("Enter Marks of Subject-02:");
  scanf("%d",&subject_2);

  avg=(subject_1+subject_2)/2.0;

  printf("Average of the two marks %.2f",avg);

  
  return 0;
}

