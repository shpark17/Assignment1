/**
 *Author: SungHa Park
 *This program computes and outputs the annualized rate of return
 */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){
  
  double InitialValue, FinalValue, Time
  
  printf("Enter the initial value of investments: ");
  scanf("%lf", &InitialValue);
  
  printf("Enter the final value of investments: ");
  scanf("%lf", &FinalValue);
  
  printf("Enter the years: ");
  scanf("%lf", &Time);
  
  double AnnualizedRateOfReturn = pow((FinalValue/InitialValue), (1/Time))
    
  printf("Initial Value: %f\n Final Value: %f\n Years: %f\n Annaulized rate of return: %f\n", InitialValue, FinalValue, TIme, AnnualizedRateOfReturn);
return 0;
}  
  
  
