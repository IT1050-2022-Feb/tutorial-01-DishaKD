/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  int distance;
  float fare;

  printf("Input the distance the vehicle has travelled:");
  scanf("%d",&distance);

  if (distance<30) //The first 30 km is at a rate of 50/= per km
  {
    fare=distance*50; 
  }
  else if (distance>30) // The remaining distance is calculated at the rate of 40/= per km
  {
    fare = 30*50 + (distance-30)*40;
  }
  
  printf("Payment for rent : %.2f",fare); // Display fare for rented vehicle

  return 0;
}
