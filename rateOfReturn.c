/**
 *Author: SungHa Park
 *This program computes and outputs the annualized rate of return
 */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){
  
  double InitialValue, FinalValue, Time, Years, Weeks, Days;
  
  printf("Enter the initial value of investments: ");
  scanf("%lf", &InitialValue);
  
  printf("Enter the final value of investments: ");
  scanf("%lf", &FinalValue);
  
  printf("Enter the years: ");
  scanf("%lf", &Years);
  
  printf("Enter the weeks: ");
  scanf("%lf", &Weeks);
  
  printf("Enter the days: ");
  scanf("%lf", &Days);
  
  Time = Years + (7*Weeks)/365 + (Days/365);
  double AnnualizedRateOfReturn = (pow((FinalValue/InitialValue), (1/Time)) - 1)*100;
    
  printf("Initial Value: %f\n Final Value: %f\n Years: %f\n Annaulized rate of return: %f%\n", InitialValue, FinalValue, Time, AnnualizedRateOfReturn);
return 0;
}  
  
  
